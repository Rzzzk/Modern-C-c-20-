#include <iostream>


using namespace std;

int main()
{
    unsigned int a, b, c, d, r;
    short digits;

    cin >> a >> b >> c >> d;
    r = ((a%100) * (b%100) * (c%100) * (d%100));
    digits = r %100;

    if(digits == 0)
    {
        cout << "00" << endl;
    }
    else if(digits < 10)
    {
        cout << "0" << digits << endl;
    }
    else
    {
        cout << digits << endl;
    }
    
    return 0;
}


/*
Y. The last 2 digits
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given 4 numbers A
, B
, C
 and D
. Print the last 2 digits from their Multiplication.

Input
Only one line containing four numbers A
, B
, C
 and D
 (2≤A,B,C,D≤109)
.

Output
Print the last 2 digits from their Multiplication.

Examples
inputCopy
5 7 2 4
outputCopy
80
inputCopy
3 9 9 9
outputCopy
87
Note
First Example :

the Multiplication of 4 numbers is 5 * 7 * 2 * 4 = 280 so the answer will be the last 2 digits which are 80.

Second Example :

the Multiplication of 4 numbers is 3 * 9 * 9 * 9 = 2187 so the answer will be the last 2 digits which are 87.
*/