#include <iostream>
using namespace std;

int main()
{
    // 1. Print number from 280 to 250 with the help of for loop.
    /*
    for (int i = 280; i >= 250; i--)
    {
        cout << i << " ";
    }
    */

    // 2.Print char from ‘A’ to ‘Z’ with the help of a for loop.
    /*
    for (char a = 65; a <= 90; a++)
    {
        cout << a << " ";
    }
    */

    // WRITE A PROGRAM WHICH IS GET NUMBER INPUT FROM THE USER AND PRINT THE NUMBER AGAINST ALPHBET , IF NUMBER IS OUT OF THE CONTEX THEN PRINT "ENTER VALID NUMBER";
    /*
    int num;
    cout << "Enter the number between 65 to 90: ";
    cin >> num;

    if (num > 90 || num < 65)
        cout << "Enter number between 65 to 90";
    else
        for (char i = num; i <= num; i++)
        {
            cout << i << " ";
        }
    */

    // Print char from ‘Z’ to ‘A’ with the help of a for loop.
    /*
    for (char a = 90; a >= 65; a--)
    {
        cout << a << " ";
    }
    */

    // 4. There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP
    /*
    for (int i = 220; i <= 730; i += 7)
    {
        cout << i << " ";
    }
    */

    // 5. Print Sum of square of first n natural number.
    /*
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum = n * (n + 1) * (2 * n + 1) / 6;
        cout << sum << " ";
    }
    */

    // 6. Print Sum of cube of first n natural number
    /*
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        sum = (n * (n + 1) / 2);
        cout << sum * sum << " ";
    }
    */

    // Print n’th Fibonacci number
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0)
        cout << "Enter a positive number";
    else
    {
        int fib1 = 0, fib2 = 1, fibN;
        if (n == 1)
            fibN = fib1;
        else if (n == 2)
            fibN = fib2;
        else
        {
            for (int i = 3; i <= n; i++)
            {
                fibN = fib1 + fib2;
                fib1 = fib2;
                fib2 = fibN;
            }
        }
        cout << "The " << n << "th Fibonaci number is: " << fibN << endl;
    }
    return 0;
}