#include <iostream>
using namespace std;

        int main()
{

        int num;
        cout<<"Enter Your Marks:\n";
        cin>>num;
        if(num>=90 && num<=100)
            cout<<"You got A";
        else if(num>=80 && num<=89)
            cout<<"You got B";
        else if(num>=70 && num<=79)
            cout<<"You got C";
        else if(num>=60 && num<=69)
            cout<<"You got D";
        else if(num>=0 && num<=59)
            cout<<"You got F";
        else
            cout<<"Unknown Number.";

        return 0;

}
