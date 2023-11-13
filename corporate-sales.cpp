// Hirchuk Vladyslav
// Corporate Sales

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// TODO: Create struct variables for North, South, East, and West Divisions
struct Company {
    string division_name;
    float first_quarter_sales;
    float second_quarter_sales;
    float third_quarter_sales;
    float fourth_quarter_sales;
    float total_annual_sales;
    float average_quarterly_sales;
};

Company division[4];

// Function for input with validation
float inputValidation(string prompt) {
    float input;
    do {
        cout << prompt;
        cin >> input;
        if (input < 0) {
            cout << "[Please enter a non-negative value.]\n";
        }
    } while (input < 0);
    return input;
}

int main() {
    
    division[0].division_name = "East";
    division[1].division_name = "West";
    division[2].division_name = "North";
    division[3].division_name = "South";

    for (int i = 0; i < 4; ++i) {
        // TODO: Fill in quarterly sales figures for each division.
        cout << "\t[For " << division[i].division_name << "]" << endl;

        division[i].first_quarter_sales = inputValidation("First-Quarter Sales: $");
        division[i].second_quarter_sales = inputValidation("Second-Quarter Sales: $");
        division[i].third_quarter_sales = inputValidation("Third-Quarter Sales: $");
        division[i].fourth_quarter_sales = inputValidation("Fourth-Quarter Sales: $");

        // TODO: Calculate total sales for each division.
        division[i].total_annual_sales = division[i].first_quarter_sales +
            division[i].second_quarter_sales +
            division[i].third_quarter_sales +
            division[i].fourth_quarter_sales;

        // TODO: Calculate average quarterly sales for each division.
        division[i].average_quarterly_sales = division[i].total_annual_sales / 4;
    }


    // TODO: Print report of all sales data from all four divisions.
    cout << endl << fixed << setprecision(2);
    for (int i = 0; i < 4; ++i) {
        cout << "\t[Sales report for " << division[i].division_name << "]" << endl;
        cout << "Total annual sales: $" << division[i].total_annual_sales << endl;
        cout << "Average quarterly sales: $" << division[i].average_quarterly_sales << endl;
    }

    return 0;
}
