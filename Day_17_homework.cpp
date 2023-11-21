#include <iostream>
using namespace std;

int main()
{
    // ADD DIGITS

    int num = 22;
    // cout << "Enter number between 0 to 9: ";
    // cin >> num;

    while (num > 9)
    {
        int ans = 0, rem;

        while (num > 0)
        {
            rem = num % 10;
            num /= 10;
            ans += rem;
        }
        num = ans;
    }
    cout << num;
}