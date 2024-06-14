#include <iostream>


bool is_collection_sorted(int numbers[], unsigned int collection_size){


  // Don't modify anything above this line
  //Your code will go below this line
    
    bool sorted {true};

    for(size_t i{0}; i<(collection_size-1); ++i)
    {
        if(numbers[i] > numbers[i+1])
        {
            sorted = false;
            break;
        }
    }
 
  //Your code will go above this line
  //Don't modify anything below this line

  return sorted;
}

int main()
{
    int array[] {1,21,55,122,400,45};

    std::cout << "The array is " << is_collection_sorted(array,std::size(array)) << std::endl;
}