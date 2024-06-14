#include <iostream>

int main()
{
    long long N , sum = 0;
    
    std::cin >> N;
    
    /*
    take alot of time
    while (N)
    {
        sum += N--;
    }
    */

   sum = (N*(N+1))/2;
    
    std::cout << sum <<std::endl;

    return 0;
}
