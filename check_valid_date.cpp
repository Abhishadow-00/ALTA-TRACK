#include <iostream>
using namespace std;
int main()
{

    int day, month, year;
    cout << "enter day , month , year : ";
    cin >> day >> month >> year;

    if (month >= 1 && month <= 12 && year > 0)
    {

        if ((month == 2) && (day >= 1 && day <= 28))
        {
            cout << "VALID DATE" << endl;
        }
        else if ((year % 4 == 0) && (month == 2) && (day == 29))
        {
            cout << "VALID DATE" << endl;
        }
        else if (((month == 4 || month == 6 || month == 9 || month == 11) && (day >= 1 && day <= 30)))
        {
            cout << "VALID DATE" << endl;
        }

        else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day >= 1 && day <= 31))
        {
            cout << "VALID DATE" << endl;
        }
        else
        {
            cout << "INVALID DATE" << endl;
        }
    }
}
