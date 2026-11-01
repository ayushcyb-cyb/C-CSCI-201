// This program uses a bubble sort to arrange an array of integers in
// descending order (largest to smallest) and prints the array after every swap
// Aayush Yadav

#include <iostream>
using namespace std;

// function prototypes

void bubbleSortArray(int [], int);
void displayArray(int[], int);

const int SIZE = 8;   // changed from 5 to 8 for the new test array

int main()
{
	int values[SIZE] = {23,0,45,-3,-78,1,-1,9};

	cout << "The values before the bubble sort is performed are:" << endl;
	displayArray(values,SIZE);
	cout << endl;

	bubbleSortArray(values,SIZE);

	cout << endl << "The values after the bubble sort is performed are:" << endl;
	displayArray(values,SIZE);

	return 0;
}

//******************************************************************
// displayArray
//
// task:	  to print the array
// data in:   the array to be printed, the array size
// data out:  none
//
//******************************************************************

void displayArray(int array[], int elems)	// function heading
{								// displays the array on one line
	for (int count = 0; count < elems; count++)
		cout << array[count] << " ";
	cout << endl;
}

//******************************************************************
// bubbleSortArray
//
// task:	  to sort values of an array in descending order
// data in:   the array, the array size
// data out:  the sorted array
//
//******************************************************************

void bubbleSortArray(int array[], int elems)
{
	bool swap;
	int temp;
	int bottom = elems - 1;   // bottom indicates the end part of the
	                          // array where the smallest values have
	                          // settled in order
	int pass = 0;
	int step = 0;

	do
	{
		swap = false;
		pass++;
		for (int count = 0; count < bottom; count++)
		{
			if (array[count] < array[count+1])   // changed > to < so the bigger number moves to the front
			{                       // the next three lines do a swap
				temp = array[count];
				array[count] = array[count+1];
				array[count+1] = temp;
				swap = true;        // indicates that a swap occurred

				step++;
				cout << "Pass " << pass << ", Step " << step << ": ";
				displayArray(array, elems);   // print the array after each swap
			}
		}
		bottom--;   // bottom is decremented by 1 since each pass through
		            // the array adds one more value that is set in order
	} while(swap != false);
	          // loop repeats until a pass through the array with
	          // no swaps occurs
}
