#include <iostream>
//
// Created by yyfnb on 2023/3/24.
//
class Singleton
{
private:
    static Singleton* s_Instance;
public:
    static Singleton& Get()
    {
        return *s_Instance;
    }
    void Hello(){}
};
Singleton* Singleton::s_Instance = nullptr;
//static int  i = 0;
static void Function()
{
    static int  i = 0;
//    int i = 0;
    i++;
    std::cout << i << std::endl;
}

//int main()
//{
//    Singleton::Get().Hello();
////    Function();
////    Function();
//}