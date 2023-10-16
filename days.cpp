#include <bits/stdc++.h>

using namespace std;

int main() {

    string m[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int d[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    for (int i = 0; i < 12; i++) {
        cout << m[i] << " has " << d[i] << " days." << endl;
    }

    return 0;
}
