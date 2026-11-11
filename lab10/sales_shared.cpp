// Lab 9.7 Student Generated Code - Option 2
// Uses a shared_ptr for the monthly sales array and passes it
// to two functions to find the highest and lowest sale

// Aayush Yadav

#include <iostream>
#include <iomanip>
#include <memory>
using namespace std;

float findHighest(shared_ptr<float[]> sales, int size);
float findLowest(shared_ptr<float[]> sales, int size);

int main()
{
    int numOfSales;
    float highest, lowest;

    cout << fixed << showpoint << setprecision(2);

    cout << "How many monthly sales will be processed? ";
    cin >> numOfSales;

    auto salesPtr = make_shared<float[]>(numOfSales);

    for (int i = 0; i < numOfSales; i++)
    {
        cout << "Please enter sales for month " << (i + 1) << ": ";
        cin >> salesPtr[i];
    }

    highest = findHighest(salesPtr, numOfSales);
    cout << "Highest monthly sale: $" << highest << endl;

    lowest = findLowest(salesPtr, numOfSales);
    cout << "Lowest monthly sale: $" << lowest << endl;

    // both functions are done so their copies are gone now
    cout << "Reference count in main: " << salesPtr.use_count() << endl;

    return 0;
}

float findHighest(shared_ptr<float[]> sales, int size)
{
    cout << "Inside findHighest - reference count: " << sales.use_count() << endl;

    float high = sales[0];
    for (int i = 1; i < size; i++)
        if (sales[i] > high)
            high = sales[i];

    return high;
}

float findLowest(shared_ptr<float[]> sales, int size)
{
    cout << "Inside findLowest - reference count: " << sales.use_count() << endl;

    float low = sales[0];
    for (int i = 1; i < size; i++)
        if (sales[i] < low)
            low = sales[i];

    return low;
}
