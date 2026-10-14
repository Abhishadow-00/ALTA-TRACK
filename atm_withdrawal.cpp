#include <iostream>
using namespace std;
int main()
{
  float accountbalance;
  int withdrawalamount;
  cout<< " accountbalance , withdrawalamount :";
  cin >> accountbalance >> withdrawalamount;
  int transaction_fee = 2;

  if (withdrawalamount > 0 && withdrawalamount % 100 == 0 && accountbalance >= withdrawalamount + transaction_fee)
  {
    cout << "transaction valid: true" << endl;
    cout << "remaining balance: " << accountbalance - (withdrawalamount + transaction_fee) << ".00" << endl;
  }
  else
  {
    cout << "transaction invalid: false";
  }
}
