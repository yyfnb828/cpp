//
// Created by yyfnb on 2023/3/30.
//
#include <iostream>
#include "Printable.h"
#ifndef TEST_JICHENG_H
#define TEST_JICHENG_H
//#endif //TEST_JICHENG_H
class Jicheng : public Printable
{
public:
    virtual std::string GetName(){return "Jicheng";}
    std:: string GetClassName() override {return "Jicheng";}
    float X,Y;

    void Move(float xa,float ya)
    {
        X += xa;
        Y += ya;
        std::cout << X << Y << std::endl;
    }
    void PrintName(){
        std::cout << X << Y << std::endl;
    };
};


#endif
