#include <iostream>



int main()
{

    unsigned short int N ;

    std::cin >> N;

    for(size_t i{1}; i<13 ; i++)
    {
        std::cout << N << " * " << i<< " = " << (i*N) << std::endl;
    }

    return 0;
}
