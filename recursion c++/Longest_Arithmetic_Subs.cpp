// Longest Arithmetic Subs
#include <iostream>
using namespace std;

int solve(int i, int arr[], int diff)
{
    if (i < 0)
        return 0;

    int ans = 0;

    // backward check
    for (int k = i - 1; k >= 0; k--)
    {
        if (arr[i] - arr[k] == diff)
        {
            // number in AP found
            ans = max(ans, 1 + solve(k, arr, diff));
        }
    }
    return ans;
}

int main()
{

    int arr[] = {9, 4, 7, 2, 10};
    int size = 5;

    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int difference = arr[j] - arr[i];
            // catch here: add 2 for elements rep. by ith and jth index
            ans = max(ans, 2 + solve(i, arr, difference));
        }
    }

    cout << "Printing ans  " << ans << endl;

    return 0;
}
