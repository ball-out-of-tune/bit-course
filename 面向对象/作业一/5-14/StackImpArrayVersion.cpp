// 5-14.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "5-14.h"
using namespace std;

class StackOfInt::StackImp {
public:
    int a[maxSize];
    int size;
};

void StackOfInt::init() {
    stackImp = new StackImp;
    stackImp->size = 0;
}

void StackOfInt::push(int x) {
    if (stackImp->size == maxSize) {
        cout << "the IntStack is full, you can't push" << endl;
        return;
    }
    stackImp->a[(stackImp->size)++] = x;
}

void StackOfInt::pop() {
    if (stackImp->size == 0) {
        cout << "the IntStack is empty, you can't pop" << endl;
    }
    (stackImp->size)--;
}

int StackOfInt::getLength() {
    return stackImp->size;
}

void StackOfInt::print() {
    for (int i = 0; i < stackImp->size; i++) {
        cout << *(stackImp->a + i) << endl;
    }
}


int main()
{
    StackOfInt stack = StackOfInt();
    stack.init();
    stack.push(8);
    stack.push(10);
    stack.push(11);
    stack.print();
    stack.pop();
    stack.print();

    cout << endl << endl;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
