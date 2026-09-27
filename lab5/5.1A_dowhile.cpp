// Aayush Yadav
#include <iostream>
using namespace std;

int main()
{
    char letter = 'a';

     cout << "----------------This program will run until you enter 'x'.----------------------" << endl; //Added

    do
    {
        cout << "Please enter a letter or (enter 'x' to exit):" << endl; 
        cin >> letter; 
        if(letter != 'x')
        {
        cout << "The letter you entered is " << letter << endl;
        cout << "Enter letter 'x' to Quit." <<endl;
        cout << "==================================================================" <<endl;
        }
        else
        cout << "You have entered 'x' to Quit." <<endl;
    }
    while(letter != 'x');

    return 0;
}
