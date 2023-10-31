#include <iostream>
using namespace std;

int main()
{
    // print 444444 in 5 column
    /*
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << 4 << " ";
        }
        cout << endl;
    }
    */

    // print 1 4 9 16 25 in 6 column
    /*
    for (int j = 0; j <= 5; j++)
    {
        for (int i = 1; i <= 5; i++)

            cout << i * i << " ";

        cout << endl;
    }
    */

    // print 1,8, 27, 64, 125, 216 in 5 column
    /*
    for (int j = 0; j <= 5; j++)
    {
        for (int i = 1; i <= 6; i++)
            cout << i * i * i << " ";
        cout << endl;
    }
    */

    // print  F G H I J K in 5 column

    for (int j = 0; j <= 5; j++)
    {
        for (char i = 'F'; i <= 'K'; i++)
            cout << i << " ";
        cout << endl;
    }
}