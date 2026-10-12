#include <iostream>
using namespace std;
int main()
{
    int a, b;
    a = 15;
    b = 42;

    cout << "before swap: a = " << a << " b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;

    cout << "after swap: a = " << a << " b = " << b << endl;
}
