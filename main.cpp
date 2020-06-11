#include <iostream>
#include <memory>

int main() {
    std::cout << "Hello, World!" << std::endl;
    while(1) {

    }
    int a =10;
    std::shared_ptr<int> ptra = std::make_shared<int>(a);
    return 0;
}
