#include <iostream>
using namespace std;
int main()
{
    int days;

    cout << "enter your age in days:";
    cin >> days;

    int years = days / 365;
    int remaining_days = days % 365;
    int months = remaining_days / 30;
    int remaining__days = remaining_days % 30;

    cout << years << "years ,";
    cout << months << "months , ";
    cout << remaining__days << "days";

  
}
