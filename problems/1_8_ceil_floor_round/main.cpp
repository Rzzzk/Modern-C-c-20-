#include <iostream>
#include <cmath>

int main()
{
    float A, B;
    
    std::cin >> A >> B ;
  
    std::cout << "floor " << A << " / "  << B << " = " << static_cast<int>(std::floor(A/B)) << std::endl;
    std::cout << "ceil "  << A << " / "  << B << " = " << static_cast<int>(std::ceil(A/B) ) << std::endl;
    std::cout << "round " << A << " / "  << B << " = " << static_cast<int>(std::round(A/B)) << std::endl;
    
    return 0;
}
