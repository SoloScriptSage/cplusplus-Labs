// Hirchuk Vladyslav
// Staduim seating solution

#include <iostream>
#include <iomanip>

using namespace std;

float a, b, c, total;
int main()
{
	cout << "Sold seats class A: ";
	cin >> a;

	cout << "Sold seats class B: ";
	cin >> b;

	cout << "Sold seats class C: ";
	cin >> c;

	a *= 15;
	b *= 12;
	c *= 9;

	total = a + b + c;

	cout << endl;
	cout << fixed << setprecision(2) << "Class A tickets sold: $" << a << endl;
	cout << fixed << setprecision(2) << "Class B tickets sold: $" << b << endl;
	cout << fixed << setprecision(2) << "Class C tickets sold: $" << c << endl;
	cout << fixed << setprecision(2) << "Total: $" << total << endl;

	return 0;
}
