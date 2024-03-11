#include <iostream>
using namespace std;

const int pai = 3.141592;
int doubleToInt(double x) {
    return (int)x;
}
int main() {
    int(*p)(double x) = doubleToInt;
    cout << (*p)(pai) << endl;
}
