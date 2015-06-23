#include <iostream>
using namespace std;

class rana{
public:
    int sum()
    {
   int num1,num2;
   cin>>num1>>num2;
   cout<<"Sum is "<<num1+num2<<".";
    }

};
int main()

{
    rana ranaObject;
    ranaObject.sum();
    return 0;

}
