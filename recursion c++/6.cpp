#include <iostream>
using namespace std;
void solve(int arr[], int size)
{
    // base case
    if (size < 1)
        return;

    // for loop -> printing
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Recursive call
    solve(arr, size / 2);
}

void solveTwo(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        cout << arr[s] << endl;
        return;
    }

    // for loop -> printing
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int mid = (s + e) / 2;
    // rec call
    solveTwo(arr, s, mid);
}