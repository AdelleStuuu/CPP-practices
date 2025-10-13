#include <iostream>
#include <string>

using namespace std;
int main()
{

    // initialize identifiers for employee information
    string date, name, id;
    float monthlySalary, absencesAndLates;
    // entering basic personal information
    cout << "Enter Payroll Period: ";
    getline(cin, date);
    cout << "Enter Employee ID: ";
    getline(cin, id);
    cout << "Enter Employee Name: ";
    getline(cin, name);
    // entering floating point information
    // salary and deductions
    cout << "Enter Monthly Salary: Php";
    cin >> monthlySalary;
    cout << "Enter Lates and Abscenses in Minutes: ";
    cin >> absencesAndLates;

    // deduct by dividing momthly salary buy 30 days and dividing it by 8 hours per day
    // dividing absences and lates by 60 to show theyre by minute
    // multiply each other to get the penalty
    float perPenaltyDeductions = ((monthlySalary / 30) / 8) * (absencesAndLates / 60);

    // provide constant information for benefits
    // witholding tax takes 12% of monthly salary
    float philHealth = 1000, pagibig = 800, SSS = 1200, witholdingTax = monthlySalary * .12;
    // calculate the total deductions by adding the constant variables together
    float totalDeductions = philHealth + pagibig + witholdingTax + SSS + perPenaltyDeductions;

    cout << "\n\n";

    cout << "\t\tAdelle Corp - Leading Innovations" << endl
         << endl;
    // Employee information section
    cout << "Employee ID: " << id << "\tPayroll Period: " << date << endl;
    cout << "Employee Name: " << name << endl
         << endl;
    // Expenses Section
    cout << "INCOME" << "\t\t\t\tDEDUCTIONS" << endl;
    cout << "Monthly Salary: Php" << monthlySalary << "\tLates and Absences: " << perPenaltyDeductions << endl;
    cout << "\t\t\t\tPhilhealth: (" << philHealth << ")" << endl;
    cout << "\t\t\t\tPagibig: (" << pagibig << ")" << endl;
    cout << "\t\t\t\tSSS: (" << SSS << ")" << endl;
    cout << "\t\t\t\tWitholding Tax: (" << witholdingTax << ")" << endl;
    // Totals Section
    cout << "Total Earnings: " << monthlySalary << endl;
    cout << "Total Deductions: " << totalDeductions << endl;
    cout << "Net Pay: " << monthlySalary - totalDeductions << endl
         << endl;

    return 0;
}