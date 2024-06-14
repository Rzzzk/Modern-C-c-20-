#include <iostream>



using namespace std;

int main()
{
    int days, months, years, inputDays;

    cin >> inputDays;

    years = inputDays / 365;
   
    inputDays %= 365;

    months = inputDays / 30;

    inputDays %= 30;

    days = inputDays;

    cout << years  << " years"  << endl;
    cout << months << " months" << endl;
    cout << days   << " days"   << endl;

    return 0;
}
