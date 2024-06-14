#include <iostream>

int main()
{

    char x{0};

    std::cout << "size of char int = " << sizeof(x) << std::endl;

    x = 127;

    std::cout << "var x = " << x++ << std::endl;

    std::cout << "var x = " << x++ << std::endl;
    return 0;

}