//
// Created by yyfnb on 2023/4/2.
//
#include <iostream>
#ifndef TEST_INIT_H
#define TEST_INIT_H


class Init {
private:
    std::string m_Name;
    int m_Score;
public:
    Init()
    //成员初始化
    :m_Name("Unknown"),m_Score(0){}
    Init(const std::string& name)
    :m_Name(name)
    {
//        m_Name = name;
    }
    const std::string& GetName() const { return m_Name;}
};


#endif //TEST_INIT_H
