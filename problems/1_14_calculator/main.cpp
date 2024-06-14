#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int a, b;
    char op;
    string exp ;

    cin >> exp;

   stringstream ss(exp);
   ss >> a >> op >> b;

   switch (op)
   {
   case '+':
    cout << a+b << endl;
    break;
   case '-':
    cout << a-b << endl;
    break;
   case '*':
    cout << a*b << endl;
    break;
   case '/':
    cout << a/b << endl;
    break;
   default:
    break;
   }
    return 0;
}
