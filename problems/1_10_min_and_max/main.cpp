#include <iostream>


using namespace std;


int main()
{
    int x, y, z, max, min;

    cin >> x >> y >> z;

    if(x > y)
    {
        if(y > z)
        {
            cout << z << " " << x << '\n';
        }
        else if( z > x)
        {
            cout << y << " " << z << '\n';
        }
        else 
        {
             cout << y << " " << x << '\n';
        }
    }
    else
    {
       if(x > z)
        {
            cout << z << " " << y << '\n';
        }
        else if( z > y)
        {
            cout << x << " " << z << '\n';
        }
        else 
        {
             cout << x << " " << y << '\n';
        } 
    }
   
    return 0;
}
