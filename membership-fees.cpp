#include <iostream>
#include <iomanip>
using namespace std;

float ife = 2500.0, mfe;

int main() {
    mfe = ife;

    cout << "Year\tMembership Fee" << endl;

    for (int i = 1; i <= 6; ++i) {
        cout << i << "\t$" << fixed << setprecision(2) << mfe << endl;
        mfe *= 1.04;
    }

    return 0;
}
