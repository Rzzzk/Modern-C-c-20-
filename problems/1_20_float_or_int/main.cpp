/*
U. Float or int
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number N
. Determine whether N
 is float number or integer number.

Note:

If N
 is float number then print "float" followed by the integer part followed by decimal part separated by space.
If N
 is integer number then print "int" followed by the integer part separated by space.
For more clarification see the examples below.

Input
Only one line containing a number N
 (1≤N≤103)
Output
Print the answer required above.

Examples
input
234.000
output
int 234
input
534.958
output
float 534 0.958


*/

#include <iostream>



using namespace std;

int main()
{
    float x, fracValue;
    int intVal;

    cin >> x;

    intVal = static_cast<int> (x);
    fracValue = x - intVal;


    if(fracValue != 0.0 )
    {
        cout << "float " << intVal << " "<< fracValue << endl;
    }
    else
    {
        cout << "int " << x << endl;
    }
    
    return 0;
}
