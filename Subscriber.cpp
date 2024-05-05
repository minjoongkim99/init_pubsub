#include "Subscriber.h"

Subscriber::Subscriber(const string &name){
    this->name = name;
}

Subscriber::~Subscriber() {}

void Subscriber::subscribeToTopic(const string& topic) {
    topics.push_back(topic);
}

vector<string> Subscriber::getSubscribedTopics() const {
    return topics;
}

string Subscriber::getName() {
    return name;
}