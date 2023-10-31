#include <iostream>
using namespace std;

int main()
{
    // 1. Two numbers are given, print the bigger number, It is given that both numbers can’t be the same

    /*
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << "Number 1 is bigger than number 2";
    }
    else if (num1 < num2)
    {
        cout << "Number 2 is bigger than number 1";
    }
    else
    {
        cout << "two number's are equal";
    }
    */

    // 2. Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager
    /*
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age > 18)
    {
        cout << "You are an adult";
    }
    else
    {
        cout << "You are a teenager";
    }
    */

    // 3. Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
    /*
    int n;
    cout << "Enter the number between 1 to 12: ";
    cin >> n;

    if (n <= 0 && n > 13)
    {
        cout << "Please enter number between 1 to 12";
    }
    else if (n == 1)
    {
        cout << "January";
    }
    else if (n == 2)
    {
        cout << "February";
    }
    else if (n == 3)
    {
        cout << "March";
    }
    else if (n == 4)
    {
        cout << "April";
    }
    else if (n == 5)
    {
        cout << "May";
    }
    else if (n == 6)
    {
        cout << "June";
    }
    else if (n == 7)
    {
        cout << "July";
    }
    else if (n == 8)
    {
        cout << "August";
    }
    else if (n == 9)
    {
        cout << "Sepetmber";
    }
    else if (n == 10)
    {
        cout << "October";
    }
    else if (n == 11)
    {
        cout << "November";
    }
    else if (n == 12)
    {
        cout << "December";
    }
    */

    // Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price(e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.
    /*
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 12 || age > 65)
    {
        cout << "Offer Avalible";
    }
    else
    {
        cout << "Offer not avalible";
    }
    */

    // 1. Print “India will win the World Cup 2023”, 20 times.
    /*
     for (int i = 0; i <= 20; i++)
     {
         cout << "I will win world cup 2023" << endl;
     }
     */

    // 2. Print all Odd numbers from 1 to n, take n as an input from the user.
    /*
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    */

    // 3. Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 4 == 0)
        {
            cout << i << " ";
        }
    }
}
