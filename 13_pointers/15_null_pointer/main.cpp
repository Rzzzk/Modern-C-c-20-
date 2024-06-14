#include <iostream>

int main()
{

    int* ptr {}; //initialized with nullptr
    ptr = new int;

    if (ptr)// check if the ptr is nullptr or not
    {
        // if ptr is not nullptr
        std::cout << "Valid addrass" << std::endl;
    }
    else
    {
        // nullptr
        std::cout << "  Invalid addrass" << std::endl;
    }
    
    delete ptr; // free
    ptr = nullptr;



    delete ptr; // you can delete a nullptr
    
    /*
    //you don not have to check

    if(ptr != nullptr)
    {
        delete ptr;
    }
    // just delete it even if it nullptr
    */


    if (ptr)// check if the ptr is nullptr or not
    {
        // if ptr is not nullptr
        std::cout << "Valid addrass" << std::endl;
    }
    else
    {
        // nullptr
        std::cout << "  Invalid addrass" << std::endl;
    }


    return 0;

}