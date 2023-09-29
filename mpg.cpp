// Hirchuk Vladyslav
// MPG Solution
#include <iostream>

using namespace std;
float MPG, miles, gallons;
int main() {
    cout << "Miles: ";
    cin >> miles;
    cout << "Gallons: ";
    cin >> gallons;
    MPG = miles / gallons;
    cout << "\nMiles per gallon: " << MPG << endl;
    return 0;
}
