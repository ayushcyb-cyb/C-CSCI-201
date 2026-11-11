// This program demonstrates unique_ptr with a dynamic array

// Aayush Yadav

#include <iostream>
#include <memory>
using namespace std;

const int MAXNAME = 10;

int main()
{
    int pos;
    int result;

    auto namePtr = make_unique<char[]>(MAXNAME);

    auto onePtr = make_unique<int>(0);

    auto twoPtr = make_unique<int>(0);

    auto threePtr = make_unique<int>(0);

    cout << "Enter your last name with exactly 10 characters." << endl;
    cout << "If your name has < 10 characters, repeat last letter. " << endl
         << "No blanks at the end." << endl;

    for (pos = 0; pos < MAXNAME; pos++)
        cin >> namePtr[pos];

    cout << "Hi ";

    for (pos = 0; pos < MAXNAME; pos++)
        cout << namePtr[pos];

    cout << endl << "Enter three integer numbers separated by blanks" << endl;

    cin >> *onePtr >> *twoPtr >> *threePtr;

    // Echo print
    cout << "The three numbers are " << endl;

    cout << *onePtr << " " << *twoPtr << " " << *threePtr << endl;

    result = *onePtr + *twoPtr + *threePtr;

    cout << "The sum of the three values is " << result << endl;

    // No delete statements needed! The smart pointers free memory
    // automatically when they go out of scope.
    return 0;
}
