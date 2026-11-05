/*
Question: 2469 -> Convert the Temperature

Problem Statement:
Given a temperature in Celsius, convert it into Kelvin and
Fahrenheit and return [kelvin, fahrenheit].

Formulas:
Kelvin = Celsius + 273.15
Fahrenheit = Celsius * 1.80 + 32.00

Example 1:
Input: celsius = 36.50
Output: [309.65000, 97.70000]

Example 2:
Input: celsius = 122.11
Output: [395.26000, 251.79800]

Constraints:
0 <= celsius <= 1000

Task:
Return the converted temperatures in an array.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double celsius;

    cout << "Enter Your Temperature In Celsius : ";
    cin >> celsius;

    double kelvin = celsius + 273.15;
    double fahrenheit = celsius * 1.80 + 32.00;

    cout << fixed << setprecision(5);

    cout << "Kelvin : " << kelvin << endl;
    cout << "Fahrenheit : " << fahrenheit << endl;

    return 0;
}






/*

#include <iomanip>  ----->>>>>  Used for output formatting.

fixed          -> Fixed decimal notation.
setprecision() -> Controls decimal precision.


Example : 
cout << fixed << setprecision(2);
Output: 97.70


Important Points:
----------------
1. setprecision(2) alone -> 2 significant digits.
2. fixed + setprecision(2) -> 2 digits after decimal.
3. setprecision(3) with fixed -> 3 digits after decimal.

*/
