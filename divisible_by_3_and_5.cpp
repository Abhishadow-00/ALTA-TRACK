#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n % 3 == 0 && n % 5 == 0)
    {
        cout << "Divisible by both 3 and 5" << endl;
    }
    else if (n % 3 == 0 && n % 5 != 0)
    {
        cout << "Divisible by  3 only " << endl;
    }
    else if (n % 3 != 0 && n % 5 == 0)
    {
        cout << "Divisible by 5 only" << endl;
    }
    else
    {
        cout << "not divisible by 3 or 5" << endl;
    }
}
