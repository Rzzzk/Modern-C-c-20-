#include <iostream>


int main()
{
    /*
    char myname[] {"rezk"};
    for (auto i : myname)
    {
        std::cout << i << " " ;
    }
    std::cout << std::endl;
    */

    int arr [] {1,2,50,4,51000,6,7,8,9,10,11}; // array

    for (auto i : arr)
    {
        i*=10;
    }

    for (auto i : arr) // i take a copy
    {
        std::cout << i << " " ;
    }
    std::cout << std::endl;

    std::cout << "using the references" << std::endl;
    
    for (auto& ref : arr) // ref is reference to arr[i] 
    {
        ref*=10;
    }

    for (auto i : arr)
    {
        std::cout << i << " " ;
    }
    std::cout << std::endl;

    

    return 0;
}