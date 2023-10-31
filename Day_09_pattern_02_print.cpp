#include <iostream>
using namespace std;

int main()
{
    // print 1 to 1-6 in 7 column
    /*
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    */
    // print A to A-E in 6 column
    /*
    for (int i = 0; i <= 4; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return 0;
    */

    // print 10 to 10-15 in 6 column
    /*
    for (int i = 0; i <= 6; i++)
    {
        int num = 10;
        for (int j = 1; j <= i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
    */

    // print A-D to A in 4 column
    for (int i = 4; i >= 0; i--)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}