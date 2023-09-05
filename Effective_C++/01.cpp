// 01 视 C++ 为一个语言联邦（C、Object-Oriented C++、Template C++、STL）

#include <iostream>
#include <vector>

// C 风格的函数
extern "C" {
    int add(int a, int b) {
        return a + b;
    }
}

// 面向对象的C++类
class MyClass {
public:
    MyClass(int value) : data(value) {}
    void printData() {
        std::cout << "Data: " << data << std::endl;
    }
private:
    int data;
};

// 模板化C++函数
template <typename T>
T multiply(T a, T b) {
    return a * b;
}

int main() {
    // 使用C风格函数
    int result = add(2, 3);
    std::cout << "C-style function result: " << result << std::endl;

    // 使用面向对象的C++类
    MyClass obj(42);
    obj.printData();

    // 使用模板化C++函数
    double product = multiply(2.5, 3.0);
    std::cout << "Template function result: " << product << std::endl;

    // 使用STL容器
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

