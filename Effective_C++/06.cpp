// 若不想使用编译器自动生成的函数，就应该明确拒绝（将不想使用的成员函数声明为 private，并且不予实现）
#include <iostream>

class MyClass {
public:
    // 显式声明默认构造函数，但不提供实现
    MyClass() = default;

    // 显式声明拷贝构造函数，但不提供实现
    MyClass(const MyClass& other) = default;

    // 显式声明拷贝赋值操作符，但不提供实现
    MyClass& operator=(const MyClass& other) = default;

    // 显式声明析构函数，但不提供实现
    ~MyClass() = default;

    // 其他公共成员函数
    void doSomething() {
        std::cout << "Doing something..." << std::endl;
    }

private:
    // 私有成员
    int data;
};

int main() {
    MyClass obj1;
    MyClass obj2 = obj1; // 编译错误，无法访问拷贝构造函数
    MyClass obj3;
    obj3 = obj1; // 编译错误，无法访问拷贝赋值操作符

    obj1.doSomething(); // 可以调用公共成员函数

    return 0;
}
