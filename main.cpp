#include "publisher.h"
#include "subscriber.h"
#include "broker.h"
#include "message.h"
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
    Broker broker;
    Publisher publisher("Publisher");
    ConsoleSubscriber subscriber("A");

    broker.subscribe("news", &subscriber);

    Message message("Hello World!");
    publisher.publish(broker, message, "news");
    return 0;
}