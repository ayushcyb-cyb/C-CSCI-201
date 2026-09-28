// This program finds the average time spent programming and studying biology
// by a student each day over a user-defined number of days.
// Aayush Yadav
#include <iostream>
using namespace std;

int main()
{
    int numStudents, numDays;
    float progHours, bioHours;
    float progTotal, bioTotal;
    float progAverage, bioAverage;
    int student, day = 0;

    cout << "This program will find the average number of hours a day"
         << " that a student spent programming and studying biology\n\n";
    cout << "How many students are there ?" << endl << endl;
    cin >> numStudents;
    cout << "How many days to calculate:" << endl;
    cin >> numDays;

    for (student = 1; student <= numStudents; student++)
    {
        progTotal = 0;
        bioTotal = 0;

        for (day = 1; day <= numDays; day++)
        {
            cout << "Please enter the number of hours worked by student "
                 << student << " on day " << day << " for programming." << endl;
            cin >> progHours;
            progTotal = progTotal + progHours;

            cout << "Please enter the number of hours worked by student "
                 << student << " on day " << day << " for biology." << endl;
            cin >> bioHours;
            bioTotal = bioTotal + bioHours;
        }

        progAverage = progTotal / numDays;
        bioAverage = bioTotal / numDays;

        cout << endl;
        cout << "The average number of hours per day spent programming by "
             << "student " << student << " is " << progAverage << endl;
        cout << "The average number of hours per day spent studying biology by "
             << "student " << student << " is " << bioAverage << endl;

        if (progAverage > bioAverage)
            cout << "Student " << student << " spent more time, on average, on programming." << endl;
        else if (bioAverage > progAverage)
            cout << "Student " << student << " spent more time, on average, on biology." << endl;
        else
            cout << "Student " << student << " spent equal time, on average, on both subjects." << endl;

        cout << endl << endl;
    }

    return 0;
}
