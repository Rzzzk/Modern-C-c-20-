#include <iostream>



using namespace std;

int main()
{
    char input;

    cin >> input;

    if(input >= '0' && input <= '9')
    {
        cout << "IS DIGIT" << endl; 
    }
    else if(input >= 'A' && input <= 'Z')
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if(input >= 'a' && input <= 'z')
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }

    return 0;
}
