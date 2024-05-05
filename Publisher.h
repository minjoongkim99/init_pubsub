#ifndef PUBLISHER_H
#define PUBLISHER_H

#include "Broker.h"
#include "Message.h"
using namespace std;

class Publisher {
public:
    Publisher(const string &name = "");
    void publish(Broker& broker, const Message& message, const string& topic);

protected:
    string name;
};

#endif