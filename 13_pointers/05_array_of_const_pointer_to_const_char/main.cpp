#include <iostream>


int main()
{
    //this string is stored in .rodata and the address of first location stored in ptr
    const char *ptr = "hello"; 
    std::cout << ptr ;
    //this string is stored in another location in .rodata and the address of first location stored in ptr
    ptr = " worled!";
    std::cout << ptr << std::endl;

    //////////////////////////////////////////////////////////////////////////////////////

    // array of pointer to const char
    const char *name[]{
        "0  aaaasssssssssssssssssssssssssssssssssssssssaaaa",
        "1  aaaassaaaa",
        "2  aaaaaaaasssssssssssss",
        "3  aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
        "4  aaaaaaaaaa",
        "5  aaaaaaaaaaaaaaaaaaaaaaaaa"
    };

    // address of pointers not address of strings
    // because the strings is stored is .rodata
    // and the pointers is stored in stack memory.
    std::cout << &name[0] << std::endl; // pointer to "0  aaaasssssssssssssssssssssssssssssssssssssssaaaa"
    std::cout << &name[1] << std::endl; // pointer to "1  aaaassaaaa", 
    std::cout << &name[2] << std::endl; // pointer to "2  aaaaaaaasssssssssssss",
    std::cout << &name[3] << std::endl; // pointer to "3  aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
    std::cout << &name[4] << std::endl; // pointer to "4  aaaaaaaaaa",
    std::cout << &name[5] << std::endl; // pointer to "5  aaaaaaaaaaaaaaaaaaaaaaaaa"
    
    // the address of strings
    std::cout << "Address of the string: " << static_cast<const void*>(name[0]) << std::endl;
    std::cout << "Address of the string: " << static_cast<const void*>(name[1]) << std::endl;
    std::cout << "Address of the string: " << static_cast<const void*>(name[2]) << std::endl;
    std::cout << "Address of the string: " << static_cast<const void*>(name[3]) << std::endl;
    std::cout << "Address of the string: " << static_cast<const void*>(name[4]) << std::endl;
    std::cout << "Address of the string: " << static_cast<const void*>(name[5]) << std::endl;

    std::cout << name[0] << std::endl;
    std::cout << name[1] << std::endl;
    std::cout << name[2] << std::endl;
    std::cout << name[3] << std::endl;
    std::cout << name[4] << std::endl;
    std::cout << name[5] << std::endl;

    name[0] = {"hi my name is rezk"};

    std::cout << name[0] << std::endl;
    std::cout << name[1] << std::endl;
    std::cout << name[2] << std::endl;
    std::cout << name[3] << std::endl;
    std::cout << name[4] << std::endl;
    std::cout << name[5] << std::endl;

    std::cout << "Address of the string: " << static_cast<const void*>(name[0]) << std::endl;
    std::cout << "Address of the string: " << static_cast<const void*>(name[1]) << std::endl;
    std::cout << "Address of the string: " << static_cast<const void*>(name[2]) << std::endl;
    std::cout << "Address of the string: " << static_cast<const void*>(name[3]) << std::endl;
    std::cout << "Address of the string: " << static_cast<const void*>(name[4]) << std::endl;
    std::cout << "Address of the string: " << static_cast<const void*>(name[5]) << std::endl;

    return 0;
}