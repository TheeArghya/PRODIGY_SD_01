#include <iostream>
#include <string>
using namespace std;

void celsconversion(float temp) {
    float farh = (temp * (9.0 / 5)) + 32;
    float kelv = temp + 273.15;
    cout << "The temperature in Fahrenheit is " << farh << endl;
    cout << "The temperature in Kelvin is " << kelv << endl;
}

void fahrconversion(float temp) {
    float cels = (temp - 32) * (5.0 / 9);
    float kelv = (temp - 32) * (5.0 / 9) + 273.15;
    cout << "The temperature in Celsius is " << cels << endl;
    cout << "The temperature in Kelvin is " << kelv << endl;
}

void kelvconversion(float temp) {
    float cels = temp - 273.15;
    float fahr = (temp - 273.15) * (9.0 / 5) + 32;
    cout << "The temperature in Celsius is " << cels << endl;
    cout << "The temperature in Fahrenheit is " << fahr << endl;
}

int main() {
    float temp;
    string unit;
    cout << "Enter the Temperature Value: ";
    cin >> temp;
    cout << "Enter the unit of the temperature (case sensitive):" << endl;
    cout << "Celsius" << endl;
    cout << "Fahrenheit" << endl;
    cout << "Kelvin" << endl;
    cout << "Enter your Choice ->>>>>>" << endl;
    cin >> unit;
    
    if (unit == "Celsius") {
        celsconversion(temp);
    } else if (unit == "Fahrenheit") {
        fahrconversion(temp);
    } else if (unit == "Kelvin") {
        kelvconversion(temp);
    } else {
        cout << "Invalid Input" << endl;
    }

    return 0;
}
