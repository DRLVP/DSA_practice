#include <iostream>
using namespace std;

int main()
{
    // First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
    /*
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // print space
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        // print number
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }

        cout << endl;
    }
    */

    // Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
    /*
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // print space
        for (int j = 1; j <= n - i; j++)
            cout << "  ";

        // print character
        char ch = ('A' + i - 1);
        for (int k = i; k >= 1; k--)
            cout << ch << " ";

        cout << endl;
    }
    */

    // Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // print space
        for (int j = 1; j <= n - 1; j++)
        {
            cout << "  ";
        }
        for (int k = n; k >= n - i; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}