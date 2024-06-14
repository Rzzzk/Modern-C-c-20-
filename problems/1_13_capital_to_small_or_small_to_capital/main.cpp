#include <iostream>



using namespace std;

int main()
{
    char input, step = 'a' - 'A';

    cin >> input;

    if(input >= 'A' && input <= 'Z')
    {
        // capital to small
        input += step;
        cout << input << endl;
    }
    else if(input >= 'a' && input <= 'z')
    {
        // small to capital
        input -= step;
        cout << input << endl;
    }

    return 0;
}