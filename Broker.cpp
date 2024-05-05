#include "Broker.h"
using namespace std;

void Broker::subscribe(const string& topic, Subscriber* subscriber) {
    if (subscribers.find(topic) != subscribers.end()) {
        subscribers[topic].push_back(subscriber);
        cout << "Subscriber " << subscriber->getName() << " subscribed to " << topic << endl;
    } else {
        subscribers[topic].push_back(subscriber);
        cout << "Topic '" << topic << "' created and " << subscriber->getName() << " subscribed." << endl;
    }
}

void Broker::publish(const Message& message, const string& topic) {
    auto& subs = subscribers[topic];
    for (auto* sub : subs) {
        sub->receive(message);
    }
}