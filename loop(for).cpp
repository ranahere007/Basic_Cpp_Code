#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter any number other than 5.\n";
    int num;

    while(cin>>num)
    if(num!=5)

        cout<<"Hey! you weren't supposed to enter 5";

    else if(num==5)

        cout<<"Wow You enter the correct Number.";
    else
        cout<<"Not a Number.";

    return 0;


}
