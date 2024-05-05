#ifndef PUBLISHER_H
#define PUBLISHER_H

#include "broker.h"
#include "message.h"
using namespace std;

class Publisher {
public:
    Publisher(const string &name = ""){
        this->name = name;
    }
    void publish(Broker& broker, const Message& message, const std::string& topic) {
        broker.publish(message, topic);
    }

protected:
    string name;
};

#endif