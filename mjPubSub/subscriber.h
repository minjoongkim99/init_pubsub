#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include "message.h"
#include <string>
using namespace std;

class Subscriber {
public:
    Subscriber(const string &name = ""){
        this->name = name;
    }
    virtual ~Subscriber() {}
    virtual void receive(const Message& message) = 0;

protected:
    string name;
};

#endif