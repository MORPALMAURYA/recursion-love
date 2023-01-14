#include <iostream>
#include <vector>
using namespace std;

void print(int arr[], int size, int index)
{
    // base case
    if (index == size)
        return;

    // ek case solve

    // Recursive call
    print(arr, size, index + 1);

    cout << arr[index] << ", ";
}

void revPrint(int arr[], int index)
{
    // base case
    if (index < 0)
        return;

    cout << arr[index] << ", ";

    // R.R
    revPrint(arr, index - 1);
}

void print3(int arr[], int size)
{
    // base case
    if (size == 0)
        return;

    cout << arr[0] << ", ";

    // R.C
    print3(arr + 1, size - 1);
}

int main()
{

    int arr[] = {1, 3, 5, 7};
    int size = 4;

    print3(arr, size);
    // revPrint(arr, size-1);
    // print(arr,size, 0);
    cout << endl;

    return 0;
}