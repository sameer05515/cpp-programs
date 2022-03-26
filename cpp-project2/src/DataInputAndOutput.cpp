#include <iostream>

int main()
{

    std::string name;
    std::string address;
    int age;

    std::cout << "Enter your name" << std::endl;
    std::cin >> name;

    std::cout << "Enter your age" << std::endl;
    std::cin >> age;

    std::cout << "Enter your address" << std::endl;
    // std::getline(std::cin,address);
    std::cin >> address;

    std::cout << "=============\nHello " << name << "!\n"
              << "You are " << age << "years old! \n"
              << "Your address is : " << address << "\n=============\n"
              << std::endl;
}