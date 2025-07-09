#include <iostream>

void add_farewell(){
    std::cout << "Farewell!" << std::endl;
}

int main() {
    std::cout << "Welcome to the app!" << std::endl;
    add_farewell();
    return 0;
}