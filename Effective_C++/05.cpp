// 了解 C++ 默默编写并调用哪些函数（编译器暗自为 class 创建 default 构造函数、copy 构造函数、copy assignment 操作符、析构函数）
#include <iostream>

class MyClass {
public:
    // 没有显式定义构造函数、拷贝构造函数、拷贝赋值操作符、析构函数

    // 自动创建的默认构造函数
    // MyClass() {}

    // 自动创建的拷贝构造函数
    // MyClass(const MyClass& other) {}

    // 自动创建的拷贝赋值操作符
    // MyClass& operator=(const MyClass& other) {}

    // 自动创建的析构函数
    // ~MyClass() {}
};

int main() {
    MyClass obj1; // 使用默认构造函数
    MyClass obj2 = obj1; // 使用拷贝构造函数
    MyClass obj3;
    obj3 = obj1; // 使用拷贝赋值操作符

    return 0;
}
