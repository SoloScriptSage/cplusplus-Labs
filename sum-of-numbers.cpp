#include <iostream>
using namespace std;

int a, sum;

int main() {
    do {
        // Input validation
        cout << "Enter a positive integer: ";
        cin >> a;
        if (a < 1)
            cout << "Please enter a positive integer." << endl;
    } while (a < 1);

    for (int i = 1; i <= a; ++i)
        sum += i;

    cout << "Sum of integers from 1 to " << a << " is: " << sum << endl;

    return 0;
}
