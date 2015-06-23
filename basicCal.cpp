#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter number we can handle + and - operation.\n";
    int num1,num2;
    char oper;
   cout<<"Enter 1st Number:";
   cin>>num1;
   cout<<"Enter 2nd NUmber:";
   cin>>num2;
   cout<<"Enter operation:";
   cin>>oper;
        switch(oper)
    {
    case '+':
        cout<<"Sum is "<<num1+num2<<".";
    break;

    case '-':
        cout<<"Sub is "<<num1-num2<<".";
    break;

    default:
        cout<<"Unknown Value";

    return 0;
    }

}
