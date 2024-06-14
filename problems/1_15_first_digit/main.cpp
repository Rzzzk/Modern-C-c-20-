#include <iostream>
#include <string>


using namespace std;

int main()
{
    int num;
    string numberStr; 
    char firstDigChar;
    short firstDigit;
    
    cin >> num; // receive the number 

    numberStr = to_string(num); // convert it to string

    firstDigChar = numberStr[0]; // catch the firist char [digit]

    firstDigit = firstDigChar - '0'; // convert it to num [digit]

    if(firstDigit%2) // check
    {
        cout << "ODD" << endl;
    }
    else
    {
        cout << "EVEN" << endl;
    }
    
    return 0;
}
