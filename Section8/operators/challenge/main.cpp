#include <iostream>

using namespace std;

int main() {

    int dollar{0}, quarter{0}, dime{0}, nickel{0}, penny{0};
    
    int change{0};
    cout<<"Please enter the an amount in cents: ";
    cin>>change;

    dollar = change/100;
    change = change % 100;
    quarter = change/25;
    change = change % 25;
    dime = change/10;
    change = change % 10;
    nickel = change/5;
    change = change % 5;
    penny = change/1;
    change = change % 1;

    cout<<"dollar: "<<dollar<<endl;
    cout<<"quarter: "<<quarter<<endl;
    cout<<"dime: "<<dime<< endl;
    cout<<"nickel: "<<nickel<<endl;
    cout<<"penny: "<<penny<<endl;

    return 0;
}