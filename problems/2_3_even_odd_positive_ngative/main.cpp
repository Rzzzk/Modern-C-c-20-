#include <iostream>

int main()
{

    unsigned int count{0}, even{0}, odd{0}, pos{0}, neg{0};
    
    long long int num{0};

    std::cin >> count;

    for (size_t i{0}; i<count ; i++)
    {
        std::cin >> num;

        if(num > 0)
        {
            // positive
            pos++;
        }
        else if(num < 0)
        {
            // negative
            neg++;
        }

        if( !(num%2))
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    std::cout << "Even: " << even << std::endl;
    std::cout << "Odd: " << odd << std::endl;
    std::cout << "Positive: " << pos << std::endl;
    std::cout << "Negative: " << neg << std::endl;


    return 0;
}
