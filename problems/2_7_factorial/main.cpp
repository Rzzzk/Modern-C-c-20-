#include <iostream>



int main()
{

    unsigned short counter{0}, num{0};
    unsigned long long int factorial{1};

    std::cin >> counter;


    for(size_t i{0}; i<counter; i++)
    {
        std::cin >> num;


        if(num < 3)
        {
            if(!num)
            {
                std::cout << 1 << std::endl;
            }
            else 
            {
                std::cout << num << std::endl;
            }
        } 
        else
        {
            // calculate the factorial
            for(size_t i{1}; i<=num ; i++)
            {
                factorial *= i;
            }
            std::cout << factorial << std::endl;
            factorial = 1;
        }
    }
    
    return 0;
}
