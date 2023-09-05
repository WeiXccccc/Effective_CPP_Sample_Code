// 尽可能使用 const
#include <iostream>

// 使用 const 修饰变量
const int MAX_VALUE = 100;

// 使用 const 修饰函数参数和返回值
int add(const int x, const int y) {
    return x + y;
}

// 使用 const 成员函数
class MyClass {
public:
    MyClass(int value) : data(value) {}

    // 使用 const 成员函数
    int getValue() const {
        return data;
    }

    // 非 const 成员函数
    void setValue(int value) {
        data = value;
    }

private:
    int data;
};

int main() {
    // 使用 const 变量
    const int num = 42;
    std::cout << "Constant value: " << num << std::endl;

    // 使用 const 函数参数和返回值
    int result = add(10, 20);
    std::cout << "Result of addition: " << result << std::endl;

    // 使用 const 成员函数
    const MyClass obj(100);
    int value = obj.getValue();
    std::cout << "Value from const object: " << value << std::endl;

    return 0;
}
