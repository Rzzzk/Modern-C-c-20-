#include <iostream>


void print_array(int array[],int size);

int main()
{

    int array[] {5,6,7,8,9};
    
    // stander function used to calculate the size of array "std::size(array)"
    int arraySize {std::size(array)};

    std::cout << "size of array: "<< arraySize <<std::endl;

    // print the array data based on range not size 
    for(auto i : array)
    {

        std::cout << " array : " << i <<std::endl;

    }

   // print_array(array,arraySize);
}

void print_array(int array[],int size)
{
    for(size_t i{0}; i<size ; i++)
    {
        std::cout << " array [" << i <<"] : "<< array[i]<< std::endl;
    }
}