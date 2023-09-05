// 宁可以编译器替换预处理器（尽量以 const、enum、inline 替换 #define）

#include <iostream>

// 使用 const 替代 #define
const int MAX_COUNT = 100;

// 使用 enum 替代 #define
enum Color { RED, GREEN, BLUE };

// 使用 inline 函数替代 #define
inline int square(int x) {
    return x * x;
}

int main() {
    // 使用 const
    int numbers[MAX_COUNT];
    for (int i = 0; i < MAX_COUNT; ++i) {
        numbers[i] = i;
    }

    // 使用 enum
    Color color = RED;
    if (color == RED) {
        std::cout << "Color is RED" << std::endl;
    }

    // 使用 inline 函数
    int result = square(5);
    std::cout << "Square of 5 is: " << result << std::endl;

    return 0;
}

