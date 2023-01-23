#include <iostream>

using namespace std;

int main(){
    double temp;
    char unit;

    cout << "******* TEMPERATURE CONVERTER *********\n";
    cout << "F = Fahrenheit\n";
    cout << "C = Celsius\n";
    cout << "what unit woult you like to convert to: ";
    cin >> unit;
    
    if (unit == 'F'||unit == 'f'){
        cout << "Enter the temperature in celsius: ";
        cin >> temp;

        temp = (1.8 *temp)+32.0;
        cout << "temperature is: "<< temp << "F\n";
    }
    else if (unit == 'C'|| unit =='c'){
        cout << "Enter the temperature in fahrenheit: ";
        cin >> temp;

        temp = (temp-32)/1.8;
        cout << "temperature is: " << temp << "C\n";

    }
    else{
        cout << "Please enter in only C or F\n";
    }
    cout << "****************************************";

    return 0;
}
