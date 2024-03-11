#include <iostream>
using namespace std;

class Dog
{

public:
    Dog() {
        ;
    }
    Dog(int weight, int height, int age) {
        this->weight = weight;
        this->height = height;
        this->age = age;
    }
    void bones() {
        cout << "your dog is chasing the bone you threw away" << endl;
    }
    int getWeight() {
        return weight;
    }
    int getHeight() {
        return height;
    }
    int getAge() {
        return age;
    }
    void run(int weight) {
        if (weight < 30 || weight > 150)
            cout << "your dog runs not that fast" << endl;
        else
            cout << "your dog runs fast!!" << endl;
    }
    void body(int weight, int height) {
        if (height > 50 && weight > 150)
            cout << "your dog is very powerful" << endl;
        else
            cout << "your dog has a normal size" << endl;
    }
    void shout(int weight = 80, int height = 50, int age = 5) { //the changed method
        if (weight > 150 && height > 50 && age > 5 && age < 10)
            cout << "woooooof" << endl;
        else if (age > 10)
            cout << "I'm a little bit old" << endl;
        else
            cout << "I'm a puppy!!" << endl;
    }

private:
    int weight;
    int height;
    int age;
};

int main()
{
    Dog myDog = Dog(70, 40, 4);
    int weight = myDog.getWeight();
    int height = myDog.getHeight();
    int age = myDog.getAge();
    myDog.bones();
    myDog.run(weight);
    myDog.body(weight, height);
    myDog.shout(weight, height, age);//the changed method
    //it doesn't change my main method
}
