#include <iostream>
#include <cmath>
using namespace std;

int main()
{       //Basic calculator program which can handle only few basic math.

    cout<<"     Welcome to Simple Calculator.\n"
        "   Here you can calculate + ; - ; * ; / ;.\n"
               "You can also find out bigger and smaller value."<<endl;
    cout<<"      ****************\n";
    cout<<endl<<endl<<endl;
                                //variable declaration.
        int num1,num2;
        char oper,con;

    do{                 //loop starting point
        cout<<"     Enter which operation you want to do: \n"
        "(B or b for bigger value and S or s for smaller value.)"<<endl;

        cin>>oper;
        cout<<"Enter first Number:\n";
        cin>>num1;
        cout<<"Enter second Number:\n";
        cin>>num2;

        if(oper=='+'){                          //if condition start.
            cout<<"Sum is "<<num1+num2<<".\n";}
        else if (oper=='-'){
            cout<<"Sub is "<<num1-num2<<".\n";}
        else if (oper=='*'){
            cout<<"Multiplication is "<<num1*num2<<".\n";}
        else if (oper=='/'){
            cout<<"Sub is "<<num1/num2<<".\n";}
        else if (oper=='B' || oper=='b'){
            if(num1>num2)
                cout<<"Bigger number is "<<num1<<endl;
            else
                cout<<"Bigger number is "<<num2<<endl;

        }
        else if (oper=='S' || oper=='s'){
            if(num1<num2)
                cout<<"Smaller number is "<<num1<<endl;
            else
                cout<<"Smaller number is "<<num2<<endl;

        }

        else{
            cout<<"Unknown Number"<<endl;}
        cout<<endl<<endl;

        cout<<"Press y or Y for continue and any for exit."<<endl;
        cin>>con;



    }
    while(con=='y'|| con=='Y');
                                                // Loop end point.
return 0;

}
