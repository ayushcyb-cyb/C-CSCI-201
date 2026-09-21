// This program illustrates the use of logical operators

// Aayush Yadav

#include <iostream>
using namespace std;

int main()
{
    char year;
    float gpa;

    cout << "What year student are you ?" << endl;
    cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
         << endl << endl;
    cin >> year;

    cout << "Now enter your gpa" << endl;
    cin >> gpa;

    if (!(gpa < 2.0 )&& year == '4')
        cout << "It is time to graduate soon" << endl;

    else if (year != '4' || gpa < 2.0)
        cout << "You need more schooling" << endl;

    return 0;
}



/*Exercise 1: How   could you rewrite gpa >= 2.0 in the   first if statement using 
the NOT operator? 


Exercise 2: Could you replace year !='4' in the else if statement with 
year < 4 or year <= 3? Why   or why   not? 
Lesson 4B     51 
Exercise 3: If you replace 
if ( gpa >= 2.0 && year == '4') 
with 
if ( gpa >= 2.0 || year == '4') 
and   replace 
else if ( year != '4'|| gpa < 2.0) 
with 
else if ( year != '4' && gpa < 2.0) 
which students will   graduate and   which will   not graduate according to this 
new program? 
Does   this handle all   cases (i.e., all   combinations of year and   gpa)? 
Exercise 4: Could   you   replace else if ( year != '4'|| gpa < 2.0) with the 
single word else?*/





 