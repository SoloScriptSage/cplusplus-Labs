// Hirchuk Vladyslav
// Restaurant Tip Solution

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

float billAmount;
float tax = 0.0675;
float tip = 0.2;
float sum;

int main() {
	cout << "Bill amount: $";
	cin >> billAmount;

	tax *= billAmount;
	tip *= billAmount;
    sum = billAmount + tax + tip;

	cout << "\nBill amount: $" << fixed << setprecision(2) << billAmount << endl;
	cout << "Tax amount: $" << fixed << setprecision(2) << tax << endl;
	cout << "Tip amount: $" << fixed << setprecision(2) << tip << endl;
	cout << "Total: $" << fixed << setprecision(2) << sum << endl;

	return 0;
}
