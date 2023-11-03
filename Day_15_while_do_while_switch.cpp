#include <iostream>
using namespace std;

int main()
{
    // 1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately
    /*
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 1;
    cout << "Even number between 1 and " << n << ": ";

    while (i <= n)
    {
        if (n % 2 == 0)
            cout << i << " ";
        else
            return -1;
        i++;
    }

    do
    {
        if (i % 2 == 0)
            cout << i << " ";
        i++;

    } while (i <= n);
    */

    // 2: Find the factorial of a number n using a while loop and do a while loop.
    /*
    int num, fact = 1;
    cout << "Enter a positive integer: ";
    cin >> num;

    while (num >= 1)
    {
        fact = fact * num;
        num--;
    }
    cout << "Factorial is : " << fact;


    do
    {
        fact *= num;
        num--;
    } while (num >= 1);
    cout << "Factorial is : " << fact;
    */

    // 3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).
    /*
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            continue;
        }
        cout << i << " ";
    }
    return 0;
    */

    // 4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here
    /*
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 1)
        cout << "Enter a valid number";
    else
    {
        switch (num)
        {
        case 1:
            cout << "January";
            break;
        case 2:
            cout << "February";
            break;
        case 3:
            cout << "March";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout << "June";
            break;
        case 7:
            cout << "July";
            break;
        case 8:
            cout << "August";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
            cout << "October";
            break;
        case 11:
            cout << "November";
            break;
        case 12:
            cout << "December";
            break;

        default:
            cout << "Happy new year";
            break;
        }
    }
    */

    // 5: Print all the Capital and small letters using a while loop. It means A-Z, then a-z
    /*
    char upperCase = 'A';
    char lowerCase = 'a';
    while (upperCase <= 'Z')
    {
        cout << upperCase << " ";
        upperCase++;
    }
    cout << endl;
    while (lowerCase <= 'z')
    {
        cout << lowerCase << " ";
        lowerCase++;
    }
    */

    // 6: Give a number n, find if it is prime or not, use a while loop and break here to solve it
    /*
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 1)
        cout << "your number is not a prime number";

    int i = 2;
    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            cout << "It's not a prime number";
            break;
        }
        else
        {
            cout << "it's prime number ";
        }
        i++;
    }
    */
}