#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void guess() {
    srand(time(NULL));

    int s = rand() % 100;
    int g;
    int n = 0;

    cout << "Welcome to the Guess the Number game!\n";

    while (true) {
        cout << "Guess the number: ";
        cin >> g;
        n++;

        if (g < s) {
            cout << "Too low! Try again.\n";
        } else if (g > s) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You've guessed the number " << s << " in " << n << " attempts.\n";
            break;
        }
    }
}

int main() {
    guess();
    return 0;
}
