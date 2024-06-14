#include <iostream>

int main()
{

    long long int X , Y ;
    std::cin >> X >> Y;
    std::cout << X << " + " << Y << " = " << (X+Y) << std::endl;
    std::cout << X << " * " << Y << " = " << (long long)(X*Y) << std::endl;
    std::cout << X << " - " << Y << " = " << (X-Y) << std::endl;

    return 0;
}
