#include <iostream>



using namespace std;

int main()
{
    int num1, num2, result;

    char op, cmp;

    cin >> num1 >> op >> num2 >> cmp >> result;

    if(op == '+' && cmp == '=')
    {
        if((num1 + num2) == result)
        {
            cout << "Yes" <<endl;
        }
        else
        {
            cout << num1+num2 << endl;
        }
    }

    else if(op == '-' && cmp == '=')
    {
        if((num1 - num2) == result)
        {
            cout << "Yes" <<endl;
        }
        else
        {
            cout << num1-num2 << endl;
        }
    }

    else if(op == '*' && cmp == '=')
    {
        if((num1 * num2) == result)
        {
            cout << "Yes" <<endl;
        }
        else
        {
            cout << num1*num2 << endl;
        }
    }
    
    
    return 0;
}


/*

W. Mathematical Expression
time limit per test0.25 seconds
memory limit per test256 MB
inputstandard input
outputstandard output
Given a mathematical expression. The expression will be one of the following expressions:

A + B = C, A - B = C and A * B = C

where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

Input
Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 105 ≤ C ≤ 105) and S can be ('+', '-', '*') without the quotation.

Output
Output either "Yes" (without the quotation) or the right answer depending on the statement.

Examples
inputCopy
5 + 10 = 15
outputCopy
Yes
inputCopy
3 - 1 = 2
outputCopy
Yes
inputCopy
2 * 10 = 19
outputCopy
20

*/