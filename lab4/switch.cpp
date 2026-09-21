// This program illustrates the use of the switch statement.

// Aayush Yadav

#include <iostream>
using namespace std;

int main()
{
    char grade;

    cout << "What grade did you earn in Programming 1 ?" << endl;
    cin >> grade;

    // Additional switch statement for Pass/Fail
    switch (grade)
    {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
            cout << "YOU PASSED!" << endl;
            break;

        case 'F':
            cout << "YOU FAILED!" << endl;
            break;

        default:
            cout << "Invalid grade entered!" << endl;
    }

    // Original switch statement
    switch (grade)
    {
        case 'A':
            cout << "an A - excellent work !" << endl;
            break;

        case 'B':
            cout << "you got a B - good job" << endl;
            break;

        case 'C':
            cout << "earning a C is satisfactory" << endl;
            break;

        case 'D':
            cout << "while D is passing, there is a problem" << endl;
            break;

        case 'F':
            cout << "you failed - better luck next time" << endl;
            break;

        default:
            cout << "You did not enter an A, B, C, D, or F" << endl;
    }

    return 0;
}