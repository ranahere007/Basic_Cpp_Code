#include <iostream>
using namespace std;
int main()
{
    cout<<"Well-come To VAT calculator.(15% Vat will be calculated)\n";
    double income;
    cout<<"Enter your monthly income:\n";
    cin>>income;
    cout<<"You have to pay "<<income*.15<<" Taka as VAT.";
    return 0;

}
