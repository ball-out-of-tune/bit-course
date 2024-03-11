#include <iostream>
using namespace std;
class Dog
{
public:
    Dog() {
        ;
    }
    Dog(int weight) {
        this->weight = weight;
    }
private:
    int weight;
};



int main()
{
    Dog myDog = Dog();//create objects with the default constructor;
                      //you can actually annotate the empty Dog constructor
    Dog mySecondDog = Dog(50);
    /*不写构造函数时，class会自动调用默认构造函数，此时默认构造函数为空，创建了一个Dog object；
        而写了构造函数之后，除了创建了一个Dog object之外，我的构造函数还为这个对象分配了weight变量的值；*/
}
