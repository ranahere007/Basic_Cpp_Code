#include <iostream>
using namespace std;
int main()
{
    cout<<"basic Calculator!\nWe can handle + ; - ; * ; / and remainder operation.\nTo see all calculation just type A instead of +,-.*,/. \n";
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

      case '*':
        cout<<"Multiplication is "<<num1*num2<<".";
    break;

      case 'Divison':
        cout<<"Division is "<<num1/num2<<".";
    break;

      case '%':
        cout<<"Remainder is "<<num1 % num2<<".";
    break;

    case 'A':
        cout<<"Sum is "<<num1+num2<<".\n";
        cout<<"Sub is "<<num1-num2<<".\n";
        cout<<"Multiplication is "<<num1*num2<<".\n";
         cout<<"Division is "<<num1/num2<<".\n";
        cout<<"Remainder is "<<num1 % num2<<".\n";
    break;

    default:
        cout<<"Unknown Value";

    return 0;
    }

}
