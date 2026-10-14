#include <iostream>
using namespace std;
int main()
{
    float originalprice, discountprecent, taxpercent;
     cout<<" originalprice , discountprecent ,taxpercent: ";
    cin >> originalprice >> discountprecent >> taxpercent;

    float discounted_price = originalprice - (originalprice * discountprecent / 100);

    cout << " discounted price: " << discounted_price << ".00" << endl;

    float final_price = discounted_price * (100 + taxpercent) / 100;

    cout << " final price: " << final_price << ".00" << endl;
}
