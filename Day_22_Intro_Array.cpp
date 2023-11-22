#include <iostream>
using namespace std;

int secondLargestElement(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = INT32_MIN;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main()
{
    // 1: Take 20 elements from user input and find its sum with the help of an array.
    /*
    int arr[1000], sum = 0;
    cout << "Enter 5 element of on the array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "The sum of 5 element: " << sum;
    */

    // 2:Calculate the average of elements in an array of size 18.
    /*
    int arr[1000], sum = 0, avg;
    cout << "Enter 5 element of on the array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        avg = sum / arr[i];
    }
    cout << avg;
    */

    // 3: Find the index of a specific element in an array, if the element is not present, print -1. Ask the size of the array from the user and then implement it
    /*
    int size, target, num = -1;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> target;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            num = i;
            break;
        }
    }

    if (num != -1)
        cout << "Element present in: " << num;
    else
        cout << num;
    */

    // Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
    /*
    char alphabet[26];

    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = 'A' + i;
        cout << alphabet[i] << " ";
    }
    */

    // 5: Find the second largest element in an array of unique elements of size n. Where n>3.
    // int arr[1000] = {5, 7, 8, 11, 6, 3};
    // cout << secondLargestElement(arr, 5);

    // 6: Find the third smallest element in an array of unique elements size n. Where n>3.
}