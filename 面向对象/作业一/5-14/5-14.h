#pragma once
#include<vector>
#define maxSize 10000
//#include "StackImpArrayVersion.cpp"

class  StackOfInt
{
private:
    class StackImp;
    StackImp* stackImp;
public:
    void init();
    void push(int x);
    void pop();
    int getLength();
    void print();
};

class  StackOfInt2
{
private:
    class StackImp;
    StackImp* stackImp;
public:
    void init();
    void push(int x);
    void pop();
    int getLength();
    void print();
};

