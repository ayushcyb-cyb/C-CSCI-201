// Aayush Yadav
#include <iostream>
using namespace std;

int main()
{
    char letter = 'a';

     cout << "----------------This program will run until you enter 'x'.----------------------" << endl; //Added

    while (letter != 'x')
    {
        cout << "Please enter a letter (enter 'x' to exit): " << endl;
        cin >> letter;

        if (letter != 'x') //added 
            cout << "The letter you entered is " << letter << endl;
        else
            cout << "You entered 'x' - exiting the program now." << endl;
    }

    return 0;
}
