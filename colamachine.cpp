#include <iostream>
using namespace std;
int main()
{

    cout<<"list of all Drinks:\n";
    cout<<" 1.CocaCola\n 2.Pepsi \n 3.Fanta\n 4.Water \n 5.7up.\n";
    cout<<"Please choose your drink:.\n";
    int num;
     cin>>num;
     if(num==1)
        cout<<"You choose CocaCola. Here is your drink";
     if(num==2)
        cout<<"You choose Pepsi. Here is your drink";
     if(num==3)
        cout<<"You choose Fanta.Here is your drink";
     if(num==4)
        cout<<"You choose Water. Here is your drink";
     if(num==5)
        cout<<"You choose 7up. Here is your drink";
    else
        cout<<"Error. choice was not valid, here is your money back.";

    return 0;

}
