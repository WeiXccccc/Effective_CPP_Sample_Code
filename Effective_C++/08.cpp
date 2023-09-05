// 别让异常逃离析构函数（析构函数应该吞下不传播异常，或者结束程序，而不是吐出异常；如果要处理异常应该在非析构的普通函数处理）

#include <iostream>
#include <stdexcept>

class Resource {
public:
    Resource() {
        // Acquire the resource, which may throw an exception
        std::cout << "Acquiring resource" << std::endl;
    }

    ~Resource() noexcept {
        try {
            // In the destructor, don't throw exceptions but handle them and terminate the program gracefully
            closeResource();
        } catch (const std::exception& e) {
            std::cerr << "Exception in destructor: " << e.what() << std::endl;
            std::terminate(); // Terminate the program gracefully
        }
    }

    void closeResource() noexcept {
        // Close the resource, which may throw an exception
        std::cout << "Closing resource" << std::endl;
        // Simulate an exceptional situation
        throw std::runtime_error("Error while closing resource");
    }
};

int main() {
    try {
        Resource resource;
        // Use the resource
        // ...
    } catch (const std::exception& e) {
        std::cerr << "Exception in main: " << e.what() << std::endl;
    }

    return 0;
}

