#include <iostream>
using namespace std;

float s;
int h;

int main() {
    cout << "What is the speed of the vehicle in mph? ";
    cin >> s;

    cout << "How many hours has it traveled? ";
    cin >> h;

    cout << "\nHour\tDistance Traveled\n---\t----\n";

    for (int i = 1; i <= h; i++)
        cout << i << "\t" << s * i << endl;

    return 0;
}
