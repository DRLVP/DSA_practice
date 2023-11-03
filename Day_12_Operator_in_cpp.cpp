#include <iostream>
using namespace std;

void isSwimOrNot(int deg)
{
    if (deg > 70 && deg < 90)
        cout << "Yes";
    else
        cout << "No";
}
int main()
{
    // 1: Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO.
    /*
    int temp;
    cout << "Enter the water tempresure: ";
    cin >> temp;
    isSwimOrNot(temp);
    */

    // 2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.
    /*
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n > 0 && n % 2 == 0)
        cout << "you entered positive and even number";
    else
        cout << "you entered odd number or negetive number";
    */

    // 3: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive)
    /*
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 13)
        cout << "you are a child";
    else if (age >= 13 && age <= 19)
        cout << "you are a teenager";
    else
        cout << "you are an adult";
    */

    // 4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO
    /*
    int a, b, c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    if (a > b && c)
        cout << "Yes";
    else
        cout << "No";
    */
}