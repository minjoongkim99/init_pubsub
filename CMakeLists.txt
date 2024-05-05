cmake_minimum_required(VERSION 3.27)
project(mjPubSub)

set(CMAKE_CXX_STANDARD 17)

add_executable(mjPubSub main.cpp Message.cpp Broker.cpp
        Publisher.cpp
        Subscriber.cpp)

