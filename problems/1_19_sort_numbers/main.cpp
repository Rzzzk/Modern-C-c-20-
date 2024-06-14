

/*

T. Sort Numbers
time limit per test0.25 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

Input
Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

Output
Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.

Examples
    
    input
    3 -2 1
    
    output
    -2
    1
    3
    3
    -2
    1
*/

#include <iostream>

using namespace std;

int main()
{
    int x, y, z, maxVal, minVal, midVal;

    cin >> x >> y >> z;

    if(x > y)
    {
        if(y > z)
        {
            maxVal = x;
            midVal = y;
            minVal = z;
        }
        else if( z > x)
        {
            maxVal = z;
            midVal = x;
            minVal = y;
        }
        else 
        {
            maxVal = x;
            midVal = z;
            minVal = y;
        }
    }
    else
    {
       if(x > z)
        {
            maxVal = y;
            midVal = x;
            minVal = z;
        }
        else if( z > y)
        {
            maxVal = z;
            midVal = y;
            minVal = x;
        }
        else 
        {
            maxVal = y;
            midVal = z;
            minVal = x;
        } 
    }
   

    cout << minVal << endl;
    cout << midVal << endl;
    cout << maxVal << endl;
    cout << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}
