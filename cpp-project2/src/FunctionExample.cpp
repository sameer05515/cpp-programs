#include <iostream>

int addNumbers(int fNum, int sNum)
{
    return fNum + sNum;
}

int main()
{
    int firstNumber{3};
    int secondNumber{4};

    std::cout << "First Number : " << firstNumber << std::endl;
    std::cout << "Second Number : " << secondNumber << std::endl;
    int sum = addNumbers(firstNumber, secondNumber);
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(34, 35);
    std::cout << "First Number : " << 34 << std::endl;
    std::cout << "Second Number : " << 35 << std::endl;
    std::cout << "Sum : " << sum << std::endl;

    std::cout << "Sum : " << addNumbers(110, 223) << std::endl;
}