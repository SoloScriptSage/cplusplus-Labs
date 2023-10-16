#include <bits/stdc++.h>

using namespace std;

int main() {
    double s[7];
    double t = 0;

    for (int i = 1; i <= 7; i++) {
        cout << "Enter sales for day " << i << ": ";
        cin >> s[i];
        t += s[i];
    }

    cout << "Total sales for the week: $" << t << endl;

    return 0;
}
