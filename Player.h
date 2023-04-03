//
// Created by yyfnb on 2023/3/30.
//
#include <iostream>
#include "Jicheng.h"
#include "Printable.h"
#ifndef TEST_PLAYER_H
#define TEST_PLAYER_H

class Player : public Jicheng
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
            : m_Name(name){}

    std::string GetName() override {return m_Name;}
};
#endif //TEST_PLAYER_H