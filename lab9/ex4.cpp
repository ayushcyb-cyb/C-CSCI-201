// Week 9 Lab, Exercise 4: counting comparisons in searches and sorts
// Aayush Yadav

#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 10000;

int linearSearchCount(const int arr[], int size, int value);
int binarySearchCount(const int arr[], int size, int value);
int bubbleSortCount(int arr[], int size);
int selectionSortCount(int arr[], int size);
void fillAscending(int arr[], int size);
void fillDescending(int arr[], int size);

int main()
{
    int sizes[4] = {10, 100, 1000, 10000};
    int arr[MAX];

    cout << "Searching for a value larger than every element (worst case)" << endl;
    cout << setw(8) << "n" << setw(12) << "linear" << setw(12) << "binary" << endl;
    for (int i = 0; i < 4; i++)
    {
        int n = sizes[i];
        fillAscending(arr, n);
        cout << setw(8) << n
             << setw(12) << linearSearchCount(arr, n, n)
             << setw(12) << binarySearchCount(arr, n, n) << endl;
    }

    cout << endl << "Comparisons made by each sort" << endl;
    cout << setw(8) << "n" << setw(14) << "bubble-sorted" << setw(14) << "bubble-rev"
         << setw(14) << "select-sorted" << setw(14) << "select-rev" << endl;
    for (int i = 0; i < 4; i++)
    {
        int n = sizes[i];
        cout << setw(8) << n;
        fillAscending(arr, n);
        cout << setw(14) << bubbleSortCount(arr, n);
        fillDescending(arr, n);
        cout << setw(14) << bubbleSortCount(arr, n);
        fillAscending(arr, n);
        cout << setw(14) << selectionSortCount(arr, n);
        fillDescending(arr, n);
        cout << setw(14) << selectionSortCount(arr, n) << endl;
    }
    return 0;
}

// Stores 0, 1, 2, ..., size - 1 (already in ascending order).
void fillAscending(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = i;
}

// Stores size - 1, ..., 2, 1, 0 (reverse order).
void fillDescending(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = size - 1 - i;
}

// Each function returns how many array elements it compared.

int linearSearchCount(const int arr[], int size, int value)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count++;
        if (arr[i] == value)
            return count;
    }
    return count;
}

int binarySearchCount(const int arr[], int size, int value)
{
    int count = 0;
    int first = 0;
    int last = size - 1;
    while (first <= last)
    {
        int middle = (first + last) / 2;
        count++;
        if (arr[middle] == value)
            return count;
        else if (arr[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return count;
}

// Add comparison counting to the two sorts below.

int bubbleSortCount(int arr[], int size)
{
    bool swap;
    int temp;
    int bottom = size - 1;
    int count = 0;
    do
    {
        swap = false;
        for (int i = 0; i < bottom; i++)
        {
            count++;
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swap = true;
            }
        }
        bottom--;                      // the largest value is now in place
    } while (swap);
    return count;
}

int selectionSortCount(int arr[], int size)
{
    int minIndex, minValue;
    int count = 0;
    for (int seek = 0; seek < size - 1; seek++)
    {
        minIndex = seek;
        minValue = arr[seek];
        for (int index = seek + 1; index < size; index++)
        {
            count++;
            if (arr[index] < minValue)
            {
                minValue = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[seek];
        arr[seek] = minValue;
    }
    return count;
}
