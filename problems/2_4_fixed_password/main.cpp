#include <iostream>


#define  PASSWORD    1999U

int main()
{

   unsigned int x{0};

    while (1)
    {
        std::cin >> x;

        if(x == PASSWORD)
        {
            std::cout << "Correct" << std::endl;
            break;
        }
        else
        {
            std::cout << "Wrong" << std::endl;
        }
    }

    return 0;
}
