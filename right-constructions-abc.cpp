#include <bits/stdc++.h>

#define ll long long
#define str string

using namespace std;

ll n;
str a;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (ll i = 0; i < n; ++i) {
        cin >> a;

        if (a == "abc") {
            cout << "YES" << endl;
            continue;
        }

        if (a[0] == 'a') {
            swap(a[1], a[2]);
        } else if (a[1] == 'b') {
            swap(a[0], a[2]);
        } else {
            swap(a[0], a[1]);
        }

        if (a == "abc")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

