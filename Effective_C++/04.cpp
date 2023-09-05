// 确定对象被使用前已先被初始化（构造时赋值（copy 构造函数）比 default 构造后赋值（copy assignment）效率高）

#include <iostream>
#include <string>

class MyClass {
public:
    MyClass(const std::string& value) : data(value) {
        std::cout << "Constructor: " << data << std::endl;
    }

    // 拷贝构造函数
    MyClass(const MyClass& other) : data(other.data) {
        std::cout << "Copy Constructor: " << data << std::endl;
    }

    // 拷贝赋值运算符
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            data = other.data;
            std::cout << "Copy Assignment: " << data << std::endl;
        }
        return *this;
    }

    void printData() const {
        std::cout << "Data: " << data << std::endl;
    }

private:
    std::string data;
};

int main() {
    // 构造时赋值
    MyClass obj1("Object 1");

    // 默认构造后赋值
    MyClass obj2 = MyClass("Object 2");

    // 使用拷贝构造函数
    MyClass obj3 = obj1;

    // 使用拷贝赋值运算符
    MyClass obj4("Object 4");
    obj4 = obj1;

    obj1.printData();
    obj2.printData();
    obj3.printData();
    obj4.printData();

    return 0;
}
