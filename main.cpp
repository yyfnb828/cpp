#include <iostream>
#include "Jicheng.h"
#include "Player.h"
#include "Kejian.h"
#include "Init.h"
#include "chongzai.h"
#include <vector>
using std::vector;
using namespace std;
//#include "Player.h"

#define LOG(x) std::cout << x << std::endl
int multiply(int a ,int b){
    return a*b;
}
void multi(int a ,int b){
    std::cout << a*b << std::endl;
}
class Entity
{
public:
        static int x;
        static int y;
        float X,Y;
        void Init()
        {
            X = 0.0f;
            Y = 0.0f;
        }
        Entity()
        {

        }
//构造函数
        Entity(float x,float y)
        {
            std :: cout << "Created Entity" << std::endl;
            X = x;
            Y = y;
        }
        void Print()
        {
            std::cout << X << "," << Y << std::endl;
        }
        static void print(){
            std::cout << x << "," << y << std::endl;
        }
//析构函数
        ~Entity()
        {
            std :: cout << "Destroyed Entity" << std::endl;
        }

};

void Increment(int &value){
    value++;
}
int Entity :: x = 3;
int Entity :: y = 5;
int s_Variable = 10;
void PrintName(Jicheng* jicheng)
{
    std::cout<<jicheng->GetName()<<std::endl;
}
void Print(Printable* obj)
{
    std::cout<<obj->GetClassName()<<std::endl;
}
int main() {
//    Entity e(5.0f,6.0f);
//    std::cout <<e.X << std::endl;
//    e.Print();
//    int *res = new int[2]{-1,-1};
//    std ::cout << res << std::endl;
//    std::cin.get();
//    Entity::x = 2;
//    Entity::y = 3;
//
//    Entity e1;
//    e1.x = 5;
//    e1.y = 28;
//    Entity::print();
//    e1.print();
//    std::cout << s_Variable << std::endl;
//    Jicheng* e = new Jicheng();
//    Jicheng jicheng;
//    jicheng.Move(2,3);
//    Jicheng* p = new Player("uufm");
//    PrintName(p);
//    Print(e);
//    Print(p);
//    Kejian kejian;
//    kejian.printlin();
//    int num = 0;
//    int res = num%2;
//    std::cout<<res<<std::endl;
//    Player player("yyf");
//    player.Move(5,5);
//    player.X = 2;
//    player.PrintName();
//Init e0;
//std::cout << e0.GetName() << std::endl;
//Init e1("YYFNB");
//std::cout << e1.GetName() <<std::endl;
chongzai a(4.0f,4.0f);
cout << a.X << endl;
chongzai b(0.5f,0.5f);
chongzai result = b.Add(a);
//b.Add(a);
chongzai result2 = a + b;
cout << b.X<<endl;
cout << result2.X << endl;



    return 0;
}