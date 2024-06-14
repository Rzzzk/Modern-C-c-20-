#include <iostream>

void common_elements(int array_1[], int array_2[]);


int main()
{
    int data1[] {1,2000,4,5,9,3,6,7,4400,5500}; 
    int data2[] {11,2,44,45,49,43,46,47,55,88};

    int data3[] {1,2,4,5,9,3,6,7,44,55}; 
    int data4[] {11,2,44,45,49,43,46,47,55,88};

    common_elements(data1,data2);

    std::cout <<  std::endl ;

    common_elements(data3,data4);

    std::cout <<  std::endl ;

}

void common_elements(int array_1[], int array_2[])
{
  // REMEMBER, The input arrays array_1 and array_2 have a fixed size of 10
   
  //Don't modify anything above this line
  //Your code will go below this line

    int comElemNum {0};
    int lArray[10]{0};

    for(size_t i{0}; i<10 ; i++)
    {
        for(size_t j{0}; j<10 ; j++)
        {
            if(array_1[i] == array_2[j])
            {
                lArray[comElemNum++] = array_1[i];
            }
        }  
    }

    if(comElemNum == 0)
    {
        std::cout << "There are 0 common elements";
    }
    else
    {
        
        std::cout << "There are " << comElemNum << " common elements they are : "; 
        for(size_t i{0}; i<comElemNum ; i++)
        {
            std::cout << lArray[i] << " " ;
        }

    }
  
  //Your code will go above this line
  //Don't modify anything after this line

}