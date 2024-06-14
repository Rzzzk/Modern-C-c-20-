#include <iostream>



using namespace std;

int main()
{
    
    unsigned int x;
    bool noEvenNum {true};

    cin >> x;

    for(size_t i{1} ; i<=x ; i++)
    {
        if(!(i%2))
        {
            cout << i << endl;
            noEvenNum=false;
        }
    }

    if(noEvenNum)
    {
        cout << -1 << endl;
    }

    return 0;
}
