#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include "Message.h"
#include <string>
#include <vector>
using namespace std;

class Subscriber {
public:
    Subscriber(const string &name = "");
    virtual ~Subscriber();
    virtual void receive(const Message& message) = 0;

    void subscribeToTopic(const string& topic);
    vector<string> getSubscribedTopics() const;
    string getName();

protected:
    string name;
    vector<string> topics;
};

#endif