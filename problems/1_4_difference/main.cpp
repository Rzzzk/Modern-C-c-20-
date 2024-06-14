#include <iostream>



int main()
{
    long long X ;
    int A, B, C, D;

    std::cin >> A >> B >> C >> D;
    
    X= (A*B) - (C*D);
    
    std::cout <<"Difference = " << X <<std::endl;

    return 0;
}