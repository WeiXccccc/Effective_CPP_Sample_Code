// 绝不在构造和析构过程中调用 virtual 函数（因为这类调用从不下降至 derived class）
#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor" << std::endl;
        // 在构造函数中调用虚拟函数，不推荐
        someVirtualFunction();
    }

    virtual ~Base() {
        std::cout << "Base destructor" << std::endl;
        // 在析构函数中调用虚拟函数，不推荐
        someVirtualFunction();
    }

    virtual void someVirtualFunction() {
        std::cout << "Base::someVirtualFunction()" << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor" << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor" << std::endl;
    }

    void someVirtualFunction() override {
        std::cout << "Derived::someVirtualFunction()" << std::endl;
    }
};

int main() {
    Derived derivedObj;
    return 0;
}
