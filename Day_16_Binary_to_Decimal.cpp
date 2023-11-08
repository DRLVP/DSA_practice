#include <iostream>
using namespace std;

int main()
{
    // Write a program to convert binary numbers to decimal numbers using a for loop.
    /*
    int num, rem, ans = 0, mul = 1;
    cout << "Enter the value of num: ";
    cin >> num;

    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    cout << ans << endl;
    */
    // Write a program to convert decimal numbers to binary numbers using a for loop
    /*
    int num, rem, ans = 0, mul = 1;
    cout << "Enter the value of num: ";
    cin >> num;

    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout << ans << endl;
    */

    // Write a program to convert decimal numbers to Octal numbers.
    /*
    int num, rem, ans = 0, mul = 1;
    cout << "Enter the value of num: ";
    cin >> num;

    while (num > 0)
    {
        rem = num % 8;
        num = num / 8;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout << ans << endl;
    */

    // Write a program to convert Octal numbers to decimal numbers
    /*
    int num, rem, ans = 0, mul = 1;
    cout << "Enter the value of num: ";
    cin >> num;

    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 8;
    }
    cout << ans << endl;
    */

    // Write a program to convert binary to Octal numbers
    int binaryNum, rem, ans, mul = 1;
    cout << "Enter the binary number: ";
    cin >> binaryNum;

    int octal = 0, decimal = 0;
    while (binaryNum > 0)
    {
        rem = binaryNum % 10;
        binaryNum = binaryNum / 10;
        decimal = decimal + rem * mul;
        mul = mul * 2;
    }
    cout << ans << endl;
}