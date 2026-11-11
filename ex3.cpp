// Week 9 Lab, Exercise 3: counting operations
// Aayush Yadav

#include <iostream>
#include <iomanip>
using namespace std;

int fixedWork(int n);
int singleLoop(int n);
int nestedLoop(int n);
int halvingLoop(int n);

int main()
{
    int sizes[4] = {10, 100, 1000, 10000};

    cout << setw(8) << "n" << setw(12) << "fixed" << setw(12) << "single"
         << setw(12) << "nested" << setw(12) << "halving" << endl;

    for (int i = 0; i < 4; i++)
    {
        int n = sizes[i];
        cout << setw(8) << n
             << setw(12) << fixedWork(n)
             << setw(12) << singleLoop(n)
             << setw(12) << nestedLoop(n)
             << setw(12) << halvingLoop(n) << endl;
    }
    return 0;
}

// Each function returns how many times its loop body ran.

int fixedWork(int n)
{
    int count = 0;
    for (int i = 1; i <= 1000; i++)    // always 1000 times, whatever n is
        count++;
    return count;
}

int singleLoop(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
        count++;
    return count;
}

int nestedLoop(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)   // inner loop runs i times
            count++;
    return count;
}

int halvingLoop(int n)
{
    int count = 0;
    while (n > 1)
    {
        n = n / 2;                     // cut n in half each time
        count++;
    }
    return count;
}
