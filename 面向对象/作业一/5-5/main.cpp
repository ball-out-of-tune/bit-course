#include <iostream>
using namespace std;
class normalDog;

class littleDog {//class C
private:
    int weight;
public:
    void shout(normalDog A);
};

class normalDog { //class A
    friend class snowDog;
    friend void littleDog::shout(normalDog A);
private:
    int weight;
    //    int length;
    int height;
public:
    normalDog(int weight, int height) {
        this->weight = weight;
        this->height = height;
    }
};


void littleDog::shout(normalDog A) {
    if (A.weight > 100) {
        cout << "wooooof!!!" << endl;
    } else {
        cout << "wangwang!!!" << endl;
    }
}

class snowDog { //class B
private:
    int weight;
public:
    snowDog(int weight) {
        this->weight = weight;
    }
    void print(normalDog A) {
        cout << "A's weight:" << A.weight << "   A's height:" <<  A.height << endl;
    }

};

int main()
{
    normalDog A(90, 180);
    normalDog A1(120, 190);
    snowDog B = snowDog(90);
    //验证B可以访问A
    B.print(A);
    //验证C的函数可以访问A
    littleDog C = littleDog();
    C.shout(A);
    C.shout(A1);
    return 0;
}
