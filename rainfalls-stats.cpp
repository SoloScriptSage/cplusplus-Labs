#include <bits/stdc++.h>

using namespace std;

const int m = 12;
double r[m];
double t = 0, a = 0;
int h = 0, l = 0;

string n[] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

int main() {
    for (int i = 0; i < m; i++) {
        cout << "Enter rainfall for " << n[i] << ": ";
        cin >> r[i];
    }

    for (int i = 0; i < m; i++) {
        t += r[i];
        h = (r[i] > r[h]) ? i : h;
        l = (r[i] < r[l]) ? i : l;
    }

    a = t / m;

    cout << "\nTotal rainfall: " << t << " inches\n";
    cout << "Average monthly rainfall: " << a << " inches\n";
    cout << "Month with the highest rainfall: " << n[h] << " (" << r[h] << " inches)\n";
    cout << "Month with the lowest rainfall: " << n[l] << " (" << r[l] << " inches)\n";

    return 0;
}
