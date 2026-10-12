#include <iostream>
using namespace std;
int main()
{
    bool isActive;
    cin >> isActive;
    cout << "Initial: " << isActive << endl;

    isActive = !isActive;
    cout << "Toggled: " << isActive << endl;
}
