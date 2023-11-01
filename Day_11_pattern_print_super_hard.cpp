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
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << "* ";
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
        {
            cout << "  ";
        }

        // print number
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    */

    // Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this
    /*
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // print space
        for (int j = 1; j <= n - i; j++)
            cout << "  ";

        // print character increseing order
        for (int k = 1; k <= i; k++)
            cout << (char)('A' + k - 1) << " ";

        // print character decreseing order
        for (int l = i - 1; l >= 1; l--)
            cout << (char)('A' + l - 1) << " ";

        cout << endl;
    }
    */

    // Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // print star increasing order
    for (int i = 1; i <= n; i++)
    {
        // print space
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int k = 1; k <= i; k++)
            cout << "* ";

        cout << endl;
    }
    // print star increasing order
    for (int i = n; i >= 1; i--)
    {
        // print space
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int k = 1; k <= i; k++)
            cout << "* ";

        cout << endl;
    }
}