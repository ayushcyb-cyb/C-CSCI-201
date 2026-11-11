// This program demonstrates the use of shared_ptr

// Aayush Yadav

#include <iostream>
#include <iomanip>
#include <memory>
using namespace std;

// Function prototypes
void displaySales(shared_ptr<float[]> sales, int size);
float computeAverage(shared_ptr<float[]> sales, int size);

int main()
{
    float total = 0;
    float average;
    int numOfSales;
    int count;

    cout << fixed << showpoint << setprecision(2);   // so money shows 2 decimals

    cout << "How many monthly sales will be processed? ";
    cin >> numOfSales;

    auto salesPtr = make_shared<float[]>(numOfSales);

    cout << "Enter the sales below\n";

    for (count = 0; count < numOfSales; count++)
    {
        cout << "Sales for Month number " << (count + 1) << ": ";
        cin >> salesPtr[count];
    }

    displaySales(salesPtr, numOfSales);

    average = computeAverage(salesPtr, numOfSales);

    cout << "Average Monthly Sale is $" << average << endl;

    cout << "Reference count before program ends: " << salesPtr.use_count() << endl;

    // Memory freed automatically -- no delete needed.
    return 0;
}

//***********************************************************
// displaySales                                             *
// task: display all sales figures with month numbers       *
// data in: a shared_ptr to the sales array and its size    *
// data out: none                                           *
//***********************************************************
void displaySales(shared_ptr<float[]> sales, int size)
{
    for (int i = 0; i < size; i++)
        cout << "Sales for Month number " << (i + 1) << ": $" << sales[i] << endl;
}

//***********************************************************
// computeAverage                                           *
// task: compute and return the average of the sales array  *
// data in: a shared_ptr to the sales array and its size    *
// data out: the average as a float                         *
//***********************************************************
float computeAverage(shared_ptr<float[]> sales, int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
        sum = sum + sales[i];

    return sum / size;
}
