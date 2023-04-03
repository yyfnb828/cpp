//
// Created by yyfnb on 2023/3/27.
//
#include <iostream>

enum Example
{
    A = 10,B,C//虽然没有给BC赋值，但是会按照A的值顺序给BC赋值。
};
int a = 0;
int b = 1;
int c = 2;

//int main()
//{
//    std::cout << a << std::endl;
//    int  value = B;
//    Example x = C;
//    std::cout << value << std::endl;
//    std::cout << x << std::endl;
//}