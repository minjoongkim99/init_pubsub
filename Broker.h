#ifndef BROKER_H
#define BROKER_H

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "Subscriber.h"
#include "Message.h"
using namespace std;

class Broker {
public:
    void subscribe(const string& topic, Subscriber* subscriber);
    void publish(const Message& message, const string& topic);

private:
    map<string, vector<Subscriber*>> subscribers;  // 주제별 구독자 목록을 관리하는 맵
};

#endif // BROKER_H