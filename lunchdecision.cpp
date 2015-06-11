#include <iostream>

using namespace std;

int main()
{

    cout<<"Make your lunch decision effectively \n";

    int budget,spent;

    cout<<"Enter your Budget for the lunch:\n";
    cin>>budget;

     if(budget==0)
        cout<<"Go on and drink water. I think It's free.\n";

    else if (budget<200)
        cout<<"Try fast food\n";

    else if(budget>500)
        cout<<"You can try some combo meal from KFC\n";

    else if(budget>1000)
        cout<<"You  have much money for lunch. You can try pizza for lunch\n";

    else if(budget>1500)
        cout<<"Such a rich man. You can buy many thing\n"<<endl;


    cout<<"Now, Let us calculate your spent Monet.\n Enter How much you spent for lunch:\n";
    cin>>spent;

    cout<<"Your Total budget was "<<budget<<" and you spent "<<spent<<".\n";

    cout<<"You still have"<<budget-spent<<" in your pocket";


}
