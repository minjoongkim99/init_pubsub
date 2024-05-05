#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
using namespace std;

class Message {
public:
    Message(const string& data) : msg(data) {}
    string getData() const { return msg; }

private:
    string msg;  // 실제 메시지 데이터를 저장하는 멤버 변수
};

#endif