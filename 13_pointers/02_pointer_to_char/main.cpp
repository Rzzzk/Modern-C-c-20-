#include <iostream>


int main()
{
    char cVar {'R'};

    char *pcPtr{nullptr};
    const char *psPtr{"rezk ahmed"};
    char cArray[] {"hamada"};

    pcPtr = &cVar;

    std::cout << "the character : " << *pcPtr << std::endl;
    
    std::cout << "the first char of string1 : " << *psPtr << std::endl;  // *ptr = *(ptr+0) = ptr[0]
    std::cout << "the seconf char of string1 : " << *(psPtr+1) << std::endl;
    
    std::cout << "the string1   : " << psPtr << std::endl;
    // psPtr[2] = 'r'; // compiler error
    
    std::cout << "the string2   : " << cArray << std::endl;
    cArray[2] = 'R';
    std::cout << "the string2   : " << cArray << std::endl;

    std::cout << "the address of string1   : " << &psPtr << std::endl;
    std::cout << "the address of string2   : " << &cArray << std::endl;

    const char * message {"Hello World!"};
    std::cout << "message : " << message << std::endl;

    //*message = "B"; // Compiler error
    std::cout << "*message : " << *message << std::endl;

    //Allow users to modify the string
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl;
    

    return 0;
}