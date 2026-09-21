// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Aayush Yadav
#include <iostream>
using namespace std;

int main()
{
    float average;    // holds the grade average

    cout << "Input your average:" << endl;
    cin >> average;

    if (average > 100 || average < 0 )
        cout <<"Invalid data" << endl;
    else if (average >= 90)
        cout <<"A"<<endl;
    else if (average >=80)
        cout<<"B"<<endl;
    else if (average >=60)
        cout<<"You Pass"<<endl;
    else
        cout<<"You Fail"<<endl;


    return 0;
}

/*Exercise 3:    Modify   the   program from Exercise 2 to allow the following cate
gories: Invalid data (data above 100),   ‘A’ category (90–100), ‘B’ category 
(80–89), “You Pass” category (60–79), “You Fail” category (0–59). 
What will happen to your program if you enter a negative value such as -12? */


    
