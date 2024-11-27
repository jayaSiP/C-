#include <iostream>
using namespace std;
int main()
{
    int amount, discount;
    cout<<"enter the purchasing amount:\n";
    cin>> amount;
    discount = amount*20/100;
    cin>>discount;
    cout<<"discount is:"<<discount;
    cout<<"\nthe amount payable is :" <<(amount - discount);
    return 0;
}