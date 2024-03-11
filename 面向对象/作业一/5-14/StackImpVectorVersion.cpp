#include <iostream>
#include "5-14.h"
using namespace std;

class StackOfInt::StackImp
{
public:
    vector <int> v;
};

void StackOfInt::init() {
    stackImp = new StackImp;
}
void StackOfInt::push(int x) {
    (stackImp->v).push_back(x);
}

void StackOfInt::pop() {
    (stackImp->v).pop_back();
}

int StackOfInt::getLength() {
    return (stackImp->v).size();
}

void StackOfInt::print() {
    for (int i = 0; i < (stackImp->v).size(); i++) {
        cout << (stackImp->v)[i] << endl;
    }
}

int main() {
    //StackOfInt x;
    StackOfInt stackimpVectorVersion = StackOfInt();
    stackimpVectorVersion.init();
    stackimpVectorVersion.push(1);
    stackimpVectorVersion.push(2);
    stackimpVectorVersion.push(4);
    stackimpVectorVersion.print();
    stackimpVectorVersion.pop();
    stackimpVectorVersion.print();
    return 0;
}