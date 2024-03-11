#include <iostream>
using namespace std;

void func() {
    static int i = 0;
    cout << "i = " << ++i << endl;
}

int main() {
    for (int x = 0; x < 10; x++)
        func();
} 
/*
expected output:
i = 1
i = 2
i = 3
i = 4
i = 5
i = 6
i = 7
i = 8
i = 9
i = 10

reason:
func中static关键字使得i只在第一次被声明时被初始化
同时++i使得i先加一后输出
*/
