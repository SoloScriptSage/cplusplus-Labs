
// Hirchuk Vladyslav
// Magic Dates Solution
#include <bits/stdc++.h>
#define ll long long
#define DIM 100009
#define pll pair<ll, ll>

using namespace std;

int month, day, year;

int main()
{

  cout << "Enter the month (numeric form): ";
  cin >> month;

  cout << "Enter the day: ";
  cin >> day;

  cout << "Enter the two-digit year: ";
  cin >> year;

  if (month * day == year) {
    cout << "The date is magic!" << endl;
  } else {
    cout << "The date is not magic." << endl;
  }

  return 0;
}
