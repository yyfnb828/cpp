//
// Created by yyfnb on 2023/3/30.
//
#include <iostream>
#ifndef TEST_PRINTABLE_H
#define TEST_PRINTABLE_H


class Printable {
private:
    int X,Y;
    void print(){}
public:
    virtual std::string GetClassName() = 0;
};


#endif //TEST_PRINTABLE_H
