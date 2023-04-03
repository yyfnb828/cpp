//
// Created by yyfnb on 2023/3/31.
//
#include <iostream>
#ifndef TEST_KEJIAN_H
#define TEST_KEJIAN_H


class Kejian {
    float X,Y;
    void print(){
        std::cout << X << Y << std::endl;
    }
public:
    void printlin()
    {
        X = 2.0f;
        Y = 10.0f;
        std::cout<< X << "-" << Y <<std::endl;
    }
};


#endif //TEST_KEJIAN_H
