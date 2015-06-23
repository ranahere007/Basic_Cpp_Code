#include <iostream>
using namespace std;

class Math{
public:
    int sum()
    {
        cout<<"Enter two integer:\n";
        int num1,num2,total;
        cin>>num1>>num2;
        total=num1+num2;
        cout<<"Result is "<<total<<"."<<endl;


    }

    int sub()
    {
        cout<<"Enter two integer:\n";
        int num1,num2,total;
        cin>>num1>>num2;
        total=num1-num2;
        cout<<"Result is "<<total<<"."<<endl;


    }

};


int main()
{
    Math callmath;
    callmath.sub();
    callmath.sum();
    return 0;



}
