#include <iostream>

void increment (int & ref);


int main(){


    /*
    int var_x {10};      // variable 
    int& ref_x {var_x};  // reference to variable var_x

    ref_x = 50 ;

    std::cout << "var_x = " << var_x << std::endl; // output : var_x = 50
    increment(var_x);
    std::cout << "var_x = " << var_x << std::endl; // output : var_x = 51
    */


   /*
    // ERORR
    const int x{20};
    int& ref_x {x};
   */

    /*
    // VALID

    const int x{20};
    const int& ref_x {x};
    */
    
   /*
   int x{10};
   int & const ref {x}; // bad because the reference cant be changed to refere to other variable

    x++;
    */

   	//Non const reference
	std::cout << std::endl;
	std::cout << "Non const reference : " << std::endl;
	int age {27};
	const int& ref_age{age};
	/*
	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;
	
	
	//Can modify original variable through reference

	std::cout << std::endl;
	std::cout << "Modify original variable through reference : " << std::endl;
	
	ref_age++; //Mofify through reference
	
	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;
    */

   //Simulating reference behavior with pointers
   //const int * const p_age {&age};
   //*p_age = 45;


    return 0;
}

void increment (int & ref)
{
    ref++;
}