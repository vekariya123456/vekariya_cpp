#include<iostream>
using namespace std;

class Bird
{
    public:
    void fly()
    {
        cout<<"Bird can fly" <<endl;
    }
};

class Fish
{
    public:
    void Swim()
    {
        cout<<"Fish can Swimming"<< endl;
    }
};

class Animal : protected Bird, public Fish
{
    public:
    void Allanimal()
    {
        cout<<"Animal Can:" << endl;

        fly();
        Fish();
    }
};

int main()
{
    Animal ani;
    ani.Alla
    nimal();
}