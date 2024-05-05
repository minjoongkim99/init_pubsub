#include "Publisher.h"
#include "Subscriber.h"
#include "Broker.h"
#include "Message.h"
#include <iostream>

using namespace std;
class ConsoleSubscriber : public Subscriber { // 구독자 관리
public:
    ConsoleSubscriber(const string& name) {
        this->name = name;
    }
    void receive(const Message& message) override {
        cout  << name << " received message: " << message.getData() << "\n";
    }

};

int main() {

    /**
     * 시뮬레이션 해보기
     */
    Broker broker;
    Publisher publisher("Publisher");
    ConsoleSubscriber subscriberA("A");
    ConsoleSubscriber subscriberB("B");


    subscriberA.subscribeToTopic("news");
    broker.subscribe("news", &subscriberA);

    subscriberB.subscribeToTopic("news");
    broker.subscribe("news", &subscriberB);

    Message message("Hello World!");
    publisher.publish(broker, message, "news");
    publisher.publish(broker, Message("abc"), "news");


    return 0;
}