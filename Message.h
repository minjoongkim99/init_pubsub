
#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
using namespace std;

class Message {
public:
    Message(const string& data);
    string getData() const;

private:
    string msg;
};

#endif