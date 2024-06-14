#include <iostream>


int main()
{

    unsigned int x{0};
    unsigned short count{0};


    std::cin >> x;
    
    for(size_t i{1}; i<(x/2); i++)
    {
        if(!(x%i))
        {
            count++;
        }
    }
    
    if(count > 1)
    {
        std::cout << "No" << std::endl;
    }
    else
    {
        std::cout << "Yes" << std::endl;
    }
    return 0;
}
