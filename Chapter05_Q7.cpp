/*
Chapter05_Q7.cpp
Duarte, Cameryn
CSC119-143 Intro to Programming Spring 2021
02/25/2021
This program calculates the user's salary over a period of days.
*/
#include <iostream>
#include <iomanip>
using namespace std;
//function prototypes
void user_input(int& daysMax);
void calculate_salary(int& day, int& daysMax, double& salary, double& total);

int main ()
{ 
    //local variables
    int maxNumberOfDays, startingNumberOfDays = 1;
    double userSalary = .01, totalSalary;
//explaining program to user
    cout << "This program calculates how much money you would earn ";
    cout << endl << "over a period of time if your salary was doubled ";
    cout << "each day, " << endl << "starting at one penny." << endl << endl;
//calling functions
    user_input(maxNumberOfDays);
    calculate_salary(startingNumberOfDays, maxNumberOfDays, userSalary,
    totalSalary);

    return 0;
}
//function 1
void user_input(int& daysMax)
{
    //asks user for input 
    do
    {
    cout << "How many days would you like to see? You must enter at least 1. ";
    cin >> daysMax;
    cout << endl;
    } while (daysMax < 1);//repeats until proper input is given
}
//function 2
void calculate_salary(int& day, int& daysMax, double& salary, double& total)
{
    //marks place in table for days, marks place in table for salary
    cout << "   Day    |    Salary" << endl;
    cout << "------------------------" << endl;
//day is set to 1 and used to count the number of times the loop repeats, the loop repeats 
//until day reaches the same number as the user's input (daysMax) for how many days they want
//to see
    while (day <= daysMax)
    {
        cout << setw(4) << day << "      |";
        cout << setw(7) << setprecision(2) << fixed << "$" << salary;
        cout << endl;
        total = (salary *= 2);//keeps track of the total salary after x amount of days to give
        //a grand total at the end
        day++;//adds one to day each time loop is performed 
    }
    cout << endl;
    cout << "Your total earnings after " << daysMax << " days would be $";
    cout << total - .01;//grand total after x amount of days (-.01 so as not to include day 1
    //salary twice)
    cout << endl << endl;
}

