#include <iostream>

class MyClass {
public:
    int data;

    MyClass(int value) : data(value) {}

    // 重载赋值运算符并返回引用
    MyClass& operator=(const MyClass& other) {
        if (this == &other) {
            // 处理自赋值情况
            return *this;
        }

        // 执行赋值操作
        data = other.data;

        // 返回引用以支持连锁赋值
        return *this;
    }
};

int main() {
    MyClass obj1(42);
    MyClass obj2(100);

    // 连锁赋值
    obj1 = obj2 = MyClass(999);

    std::cout << "obj1.data: " << obj1.data << std::endl;
    std::cout << "obj2.data: " << obj2.data << std::endl;

    return 0;
}
