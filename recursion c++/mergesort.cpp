#include <iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e)
{

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int i = 0;
    for (int index = s; index <= mid; index++)
    {
        first[i] = arr[index];
        i++;
    }

    int j = 0;
    for (int index = mid + 1; index <= e; index++)
    {
        second[j] = arr[index];
        j++;
    }

    // merge these 2 arrays into the original array
    int originalArrayIndex = s;
    int index1 = 0;
    int index2 = 0;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[originalArrayIndex] = first[index1];
            index1++;
            originalArrayIndex++;
        }
        else
        {
            arr[originalArrayIndex] = second[index2];
            index2++;
            originalArrayIndex++;
        }
    }

    // exhaust first array
    while (index1 < len1)
    {
        arr[originalArrayIndex] = first[index1];
        index1++;
        originalArrayIndex++;
    }

    // exhaust second array
    while (index2 < len2)
    {
        arr[originalArrayIndex] = second[index2];
        index2++;
        originalArrayIndex++;
    }
    // todo: free the memory taken by dynamic ararys
}

void mergeSort(int arr[], int s, int e)
{

    cout << "Recieved a call for s -> " << s << " e -> " << e << endl;

    // base case
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // left part - recursion sort karke do
    mergeSort(arr, s, mid);

    // right part - recursive sort karke do
    mergeSort(arr, mid + 1, e);

    // merge sorted arrays
    merge(arr, s, mid, e);
}

int main()
{

    int arr[] = {
        3,
        4,
        1,
        5,
        6,
        6,
        6,
        6,
        2,
    };
    int size = 9;

    mergeSort(arr, 0, size - 1);

    cout << "printing the sorted array " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
