// 为多态基类声明 virtual 析构函数（如果 class 带有任何 virtual 函数，它就应该拥有一个 virtual 析构函数）

#include <iostream>

// 多态基类
class Shape {
public:
    Shape() {
        std::cout << "Shape constructor" << std::endl;
    }

    virtual ~Shape() {
        std::cout << "Shape destructor" << std::endl;
    }

    // 虚拟函数
    virtual void draw() {
        std::cout << "Drawing a shape" << std::endl;
    }
};

// 派生类
class Circle : public Shape {
public:
    Circle() {
        std::cout << "Circle constructor" << std::endl;
    }

    ~Circle() override {
        std::cout << "Circle destructor" << std::endl;
    }

    void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

int main() {
    // 使用基类指针指向派生类对象
    Shape* shape = new Circle;

    // 调用虚拟函数，将调用派生类的实现
    shape->draw();

    // 删除基类指针，将调用派生类的析构函数
    delete shape;

    return 0;
}
