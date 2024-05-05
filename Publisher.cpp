#include "Publisher.h"

Publisher::Publisher(const string &name) {
    this->name = name;
}

void Publisher::publish(Broker& broker, const Message& message, const string& topic) {
    broker.publish(message, topic);
}