#include <iostream>
#include <string>

int main() {
    std::string name{};
    std::cout << "What is your first name?\n";
    std::cin >> name ;
    if (name == "Zuzanna")
        std::cout << "Hello Zuzanna! Welcome back.\n";
    else 
        std::cout << "I'm sorry" << name << "I don't believe I know you. You are welcome regardless!\n";

}