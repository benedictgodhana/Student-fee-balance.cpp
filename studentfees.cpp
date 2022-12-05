#include <iostream>
using namespace std;
int main()
{
    // variable declaration
    float studentID;
    string name;
    int age, fees=25000, balance, amount;
    
    //Variable initialization
    cout<<"Enter Student's Name: ";
    getline(cin,name);
    cout<<"Enter " +name+ "'s ID: ";
    cin>>studentID;
    cout<<"Enter " +name+ "'s Age: ";
    cin>>age;
    cout<<"Enter " +name+ "'s Fees payable: ";
    cin>>amount;

    balance=amount-fees;

    


     if (amount>25000)
     {
            cout<<"Your fee balance is: "<<balance<<endl;

     }
     if (amount<25000)
     {
        cout<<"You have a fee balance of: -"<<fees-amount<<" Kindly Clear it!"<<endl;
     }
     else
     {
        cout<<"Thank you for clearing the fees"<<endl;
     }
}