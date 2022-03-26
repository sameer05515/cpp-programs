#include <iostream>

int main(){
    // Braced initialization
    int a {5};
    int b {10};
    int c {a+b};

    std::cout << "a" << a << std::endl;
    std::cout << "b" << b << std::endl;
    std::cout << "c" << c << std::endl;

    // Functional initialization
    int a1 (12);
    int b1 (10);
    int c1 (a1+b1);

    std::cout << "a" << a1 << std::endl;
    std::cout << "b" << b1 << std::endl;
    std::cout << "c" << c1 << std::endl;

    // Assignment notation
    int a2 =12;
    int b2 =10;
    int c2 =a2+b2;

    std::cout << "a" << a2 << std::endl;
    std::cout << "b" << b2 << std::endl;
    std::cout << "c" << c2 << std::endl;

    // size of
    std::cout << "Size of int : " << sizeof(int) << std::endl;
    std::cout << "Size of c : " << sizeof(c2) << std::endl;


}