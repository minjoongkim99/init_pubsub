#ifndef BROKER_H
#define BROKER_H

#include <map>
#include <string>
#include <vector>
#include "subscriber.h"
#include "message.h"
using namespace std;

class Broker {
public:
    void subscribe(const string& topic, Subscriber* subscriber) {
        subscribers[topic].push_back(subscriber);  // 주제를 키로 사용하여 구독자 목록에 추가
    }

    void publish(const Message& message, const string& topic) {
        auto& subs = subscribers[topic];  // 해당 주제에 등록된 구독자 목록을 참조

        for (auto* sub : subs) {  // 모든 구독자에게 메시지 전달
            sub->receive(message);  // 각 구독자의 receive 함수를 호출하여 메시지를 전달
        }
    }

private:
    map<string, vector<Subscriber*>> subscribers;  // 주제별 구독자 목록을 관리하는 맵
};

#endif