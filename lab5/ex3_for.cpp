// This program has the user input two numbers n and m and then finds the
// mean of the consecutive integers from n to m
// Aayush Yadav
#include <iostream>
using namespace std;

int main()
{
    int n, m;       // n is the starting number, m is the ending number
    int total = 0;  // total holds the sum of the numbers from n to m
    int number;     // the loop counter
    float mean;     // the average of the numbers from n to m

    cout << "Please enter the starting positive integer (n)" << endl;
    cin >> n;

    cout << "Please enter the ending positive integer (m)" << endl;
    cin >> m;

    if (n > 0 && m > 0 && m >= n)
    {
        for (number = n; number <= m; number++)
        {
            total = total + number;
        }
        mean = static_cast<float>(total) / (m - n + 1);

        cout << "The mean average of the integers from " << n
             << " to " << m << " is " << mean << endl;
    }
    else
        cout << "Invalid input - both integers must be positive, and m must be >= n" << endl;

    return 0;
}