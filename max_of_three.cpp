#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  if (a > b)
  {
    if (a > c)
    {
      cout << " the largest value is: a= " << a;
    }
    else
    {
      cout << "the largest value is: c=" << c;
    }
  }
  else
  {
    if (b > c)
      cout << "the largest value is: b=" << b;
    else
      cout << "the largest value is: c=" << c;
  }
}
