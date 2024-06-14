#include <iostream>




int main()
{

    long long x, y;
    short d1 , d2;

    std::cin >> x >> y ;
    
    d1 = x%10; //last digit os first num
    d2 = y%10; //last digit of second num

    std::cout << d1+d2 << std::endl;


    return 0;
}
