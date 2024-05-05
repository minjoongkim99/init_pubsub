
#include "Message.h"
using namespace std;

Message::Message(const string& data) {
    this->msg = data;
}

string Message::getData() const {
    return msg;
}