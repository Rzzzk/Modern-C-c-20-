#include <iostream>



int* AllocatInHeap(void);


int main(){
    
    int *ptr{new int (2440)};
    int *ptr2{nullptr};
    std::cout << *ptr << std::endl;

    delete ptr;
    ptr = nullptr;

    ptr = new int (40);

    if (ptr != nullptr)
    {
        std::cout << *ptr << std::endl;
    }
    else
    {
        // handle the error
    }
    ptr2 = AllocatInHeap();
    std::cout << *ptr2 << std::endl;

    


    return 0;
}


int* AllocatInHeap(void)
{
    int *ptr {new int(777)};

    return ptr;
}
