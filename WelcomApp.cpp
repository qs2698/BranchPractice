#include <iostream>

void addhello(){
    std::cout << "hello!" << std::endl;
}

void add_farewell(){
    std::cout << "Farewell!" << std::endl;
}

int main() {
    std::cout << "Welcome to the app!" << std::endl;
    addhello();
    add_farewell();
    return 0;
}