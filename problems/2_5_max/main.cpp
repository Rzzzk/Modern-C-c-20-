#include <iostream>


int main()
{

    short int counter{0};
    unsigned int num{0}, max{0};
    
    std::cin >> counter;

    for(size_t i{0}; i<counter; i++)
    {
        std::cin >> num;
        
        if(num > max)
        {
            max = num;
        }
    }

    std::cout << max << std::endl;

    return 0;
}
