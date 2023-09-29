// Hirchuk Vladyslav
// Monthly message Solution

#include <bits/stdc++.h>
#define ll long long
#define DIM 100009
#define pll pair<ll,ll>
using namespace std;

int m;

int main() {
    cout << "Enter a month number (1 = January, 2 = February, etc.): ";
    cin >> m;

    switch (m) {
        case 1:
            cout << "Welcome to January! Stay warm and enjoy the winter wonderland." << endl;
            break;

        case 2:
            cout << "Hello February! Get ready to celebrate love on Valentine's Day." << endl;
            break;

        case 3:
            cout << "March is here! Spring is blooming, and St. Patrick's Day is around the corner." << endl;
            break;

        case 4:
            cout << "April showers bring May flowers. Welcome to April!" << endl;
            break;

        case 5:
            cout << "May is here! Enjoy the beauty of springtime and outdoor activities." << endl;
            break;

        case 6:
            cout << "Welcome to June! Summer has arrived; it's time for beach trips and ice cream." << endl;
            break;

        case 7:
            cout << "July is here! Celebrate independence with fireworks and barbecues." << endl;
            break;

        case 8:
            cout << "August is upon us. Make the most of the warm summer days." << endl;
            break;

        case 9:
            cout << "September has arrived. Fall is approaching; enjoy the changing leaves." << endl;
            break;

        case 10:
            cout << "Hello October! Get ready for Halloween festivities and pumpkin spice everything." << endl;
            break;

        case 11:
            cout << "November is here. Give thanks and prepare for the holiday season." << endl;
            break;

        case 12:
            cout << "December is here! Embrace the magic of the holiday season and spread joy." << endl;
            break;

        default:
            cout << "Error: Invalid month number. Please enter a number between 1 and 12." << endl;
            break;
    }

    return 0;
}
