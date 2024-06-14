#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    double A ,R;

    cin >> R;

    A = 3.141592653 * R * R;
   
    cout << fixed << setprecision(9);
   
    cout << A << endl;
    
}