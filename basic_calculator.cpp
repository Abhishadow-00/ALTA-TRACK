#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    cout << "enter first number:";
    cin >> a;

    cout << "enter second number:";
    cin >> b;

    cout << "opration type:";
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << a << "+" << b << "= " << a + b << endl;
        break;

    case '-':
        cout << a << "-" << b << "=" << a - b;
        break;

    case '*':
        cout << a << "*" << b << "=" << a * b;
        break;

    case '/':
        cout << a << "/" << b << "=" << a / b;
        break;

    case '%':
        cout << a << "%" << b << "=" << a % b;
        break;

    default:
        cout << "enter a valid number";
    }
}
