// This program demonstrates the use of unique_ptr
// It finds the area of a rectangle given length and width
// It prints the length and width in ascending order

// Aayush Yadav

#include <iostream>
#include <memory>
using namespace std;

int main()
{
    auto lengthPtr = make_unique<int>(0);

    auto widthPtr = make_unique<int>(0);

    cout << "Please input the length of the rectangle" << endl;
    cin >> *lengthPtr;

    cout << "Please input the width of the rectangle" << endl;
    cin >> *widthPtr;

    int area = *lengthPtr * *widthPtr;

    cout << "The area is " << area << endl;

    if (*lengthPtr > *widthPtr)
        cout << "The length is greater than the width" << endl;
    else if (*widthPtr > *lengthPtr)
        cout << "The width is greater than the length" << endl;
    else
        cout << "The width and length are the same" << endl;

    // No delete needed! The unique_ptrs free memory automatically.
    return 0;
}
