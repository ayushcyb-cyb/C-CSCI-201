#include <iostream>
#include <iomanip>
using namespace std;

// This program will input American money and convert it to foreign currency
// Aayush

const float EURO_RATE = 1.06;
const float PESO_RATE = 9.73;
const float YEN_RATE = 124.35;

// Prototypes of the functions
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

int main ()
{
    float dollars;
    float euros;
    float pesos;
    float yen;

    cout << fixed << showpoint << setprecision(2);

    cout << "Please input the amount of American Dollars you want converted "
         << endl;
    cout << "to euros and pesos" << endl;
    cin >> dollars;

    convertMulti(dollars, euros, pesos);

    cout << "$" << dollars << " is converted to " << euros << " euros and "
         << pesos << " pesos" << endl << endl;

    cout << "Please input the amount of American Dollars you want converted\n";
    cout << "to euros, pesos and yen" << endl;
    cin >> dollars;

    convertMulti(dollars, euros, pesos, yen);

    cout << "$" << dollars << " is converted to " << euros << " euros, "
         << pesos << " pesos, and " << yen << " yen" << endl << endl;

    cout << "Please input the amount of American Dollars you want converted\n";
    cout << "to yen" <<endl;
    cin >> dollars;

    yen = convertToYen(dollars);

    cout << "$" << dollars << " is converted to " << yen << " yen" << endl << endl;

    cout << "Please input the amount of American Dollars you want converted\n";
    cout << "to euros" << endl;
    cin >> dollars;

    euros = convertToEuros(dollars);

    cout << "$" << dollars << " is converted to " << euros << " euros" << endl << endl;

    cout << "Please input the amount of American Dollars you want converted\n";
    cout << "to pesos" << endl;
    cin >> dollars;

    pesos = convertToPesos(dollars);

    cout << "$" << dollars << " is converted to " << pesos << " pesos" << endl;

    return 0;
}

// **************************************************************************
// convertMulti
//
// task: This function takes a dollar value and converts it to euros
//       and pesos
// data in: dollars
// data out: euros and pesos
//
// *************************************************************************
void convertMulti(float dollars, float& euros, float& pesos)
{
    euros = dollars * EURO_RATE;
    pesos = dollars * PESO_RATE;
}

// ************************************************************************
// convertMulti
//
// task: This function takes a dollar value and converts it to euros
//       pesos and yen
// data in: dollars
// data out: euros pesos yen
//
// ***********************************************************************
void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
    euros = dollars * EURO_RATE;
    pesos = dollars * PESO_RATE;
    yen = dollars * YEN_RATE;
}

// ****************************************************************************
// convertToYen
//
// task: This function takes a dollar value and converts it to yen
// data in: dollars
// data returned: yen
//
// ***************************************************************************
float convertToYen(float dollars)
{
    return dollars * YEN_RATE;
}

// ****************************************************************************
// convertToEuros
//
// task: This function takes a dollar value and converts it to euros
// data in: dollars
// data returned: euros
//
// ***************************************************************************
float convertToEuros(float dollars)
{
    return dollars * EURO_RATE;
}

// *****************************************************************************
// convertToPesos
//
// task: This function takes a dollar value and converts it to pesos
// data in: dollars
// data returned: pesos
//
// ****************************************************************************
float convertToPesos(float dollars)
{
    return dollars * PESO_RATE;
}