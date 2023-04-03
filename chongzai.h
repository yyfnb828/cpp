//
// Created by yyfnb on 2023/4/3.
//
#include <iostream>
#ifndef TEST_CHONGZAI_H
#define TEST_CHONGZAI_H


class chongzai {
public:
    float X,Y;
    chongzai(float x,float y)
    {
        X = x;
        Y = y;
    }
    chongzai Add(const chongzai& other) const
    {
        return chongzai(X + other.X,Y + other.Y);
    }
    chongzai operator+(const chongzai& other) const
    {
        return Add(other);
    }
};


#endif //TEST_CHONGZAI_H
