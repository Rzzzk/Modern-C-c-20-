#include <iostream>



using namespace std;

int main()
{
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    // =======
    //     ########
    if (r2 >= r1 && l2 >= l1 && r1 >= l2)
    {
        cout << l2 << " " << r1 << endl;
    }

    //         ========
    //     #################
    else if (r2 >= r1 && l1 >= l2)
    {
        cout << l1 << " " << r1 << endl; // interval #1 in 
    }

    //     ================
    //        ##########
    else if ( l2>=l1 && r1 >= r2)
    {
        cout << l2 << " " << r2 << endl; // interval #1 in 
    }

    //           ===============
    //   ##############
    else if(r1 > r2 && l1 > l2 && r2 > l1)
    {
        cout << l1 << " " << r2 << endl;
    }

    //   ============
    //              ##############
    else if(r1 == l2)
    {
        cout << r1 << " " << l2 << endl;
    }

     //            ============
    //   ###########
    else if(r2 == l1)
    {
        cout << r2 << " " << l1 << endl;
    }

    else
    {
        cout << -1 << endl; // no inter-sections
    }

    return 0;
}


/*
X. Two intervals
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given the boundaries of 2 intervals. Print the boundaries of their intersection.

Note: Boundaries mean the two ends of an interval which are the starting number and the ending number.

Input
Only one line contains two intervals [l1,r1]
, [l2,r2]
 where (1≤l1,l2,r1,r2≤109)
, (l1≤r1,l2≤r2)
.

It's guaranteed that l1≤r1
 and l2≤r2
.

Output
If there is an intersection between these 2 intervals print its boundaries , otherwise print -1.

Examples
inputCopy
1 15 5 27
outputCopy
5 15
inputCopy
2 5 6 12
outputCopy
-1

*/