#include <iostream>
#include <string>

int main()
{

    unsigned int num, numOfDigits{0};
    bool palindrome{true};


    std::string numStrig{};

    std::cin >> num;

    numStrig = std::to_string(num);
    numOfDigits = std::size(numStrig) - 1;


    for(size_t i{0}; i<= numOfDigits; i++)
    {
        if(numStrig[i] != numStrig[numOfDigits-i])
        {
            palindrome = false;
            break;
        }
    }


    while (numStrig[numOfDigits] == '0')
    {
        num = num / 10;
        numOfDigits--;
    }
    std::cout << num << std::endl;
    
    if(palindrome)
    {
        std::cout << "YES" << std::endl;
    }
    else 
    {
        std::cout << "NO" << std::endl;
    }

    
    return 0;
}
