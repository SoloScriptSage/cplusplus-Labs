// Hirchuk Vladyslav
// BMI Solution
#include <bits/stdc++.h>
#define ll long long
#define DIM 100009
#define pll pair<ll, ll>
using namespace std;

double w, h, b;

int main()
{
    cout << "Enter your weight in pounds: ";
    cin >> w;

    cout << "Enter your height in inches: ";
    cin >> h;

    b = (w * 703) / (h * h);
    cout << "Your BMI is: " << b << endl;

    if (b >= 18.5 && b <= 25) {
        cout << "You have optimal weight." << endl;
    } else if (b < 18.5) {
        cout << "You are underweight." << endl;
    } else {
        cout << "You are overweight." << endl;
    }

    return 0;
}
