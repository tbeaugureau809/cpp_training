#include <iostream>
using namespace std;



int main() {

//This is the example which uses if and if else statements. You will try and do a switch statement on your own
    // char selection{};
    // do {
    //     cout<<"\n-------------------------------"<<endl;
    //     cout<<"1. Do this: "<<endl;
    //     cout<<"2. Do that: "<<endl;
    //     cout<<"3. Do something else"<<endl;
    //     cout<<"Q. To quit"<<endl;
        
    //     cout<<"\nPlease select an option: ";
    //     cin>>selection;

    //     if (selection == '1') 
    //         cout<<"You chose to - do this";
    //     else if (selection == '2')
    //         cout<<"You chose to - do that";
    //     else if ( selection == '3')
    //         cout<<"You chose to - do something else";
    //     else if (selection == 'q' || selection == 'Q')
    //         cout<<"Goodbye";
    //     else
    //         cout<<"Please select a valid input";
        

    // } while (selection != 'q' && selection != 'Q');


    char selection{};
    
    do {
        cout<<"\n----------------"<<endl;
        cout<<"Please make a selection from the below"<<endl<<endl;
        cout<<"1. Do this"<<endl;
        cout<<"2. Do that"<<endl;
        cout<<"3. Do something else"<<endl;
        cout<<"Q. Exit program"<<endl;
        
        cout<<"\nEnter your chosen option: ";
        cin>>selection;

        switch(selection) {
            case '1': 
                cout<<"You have selected to - do this";
                break;
            case '2':
                cout<<"You have selected to - do that";
                break;
            case '3':
                cout<<"You have selected to - do something else";
                break;
            case 'q':
            case 'Q':
                cout<<"Goodbye, thank you for using"<<endl;
                break;
            
                default: 
                cout<<"Sorry, please choose a valid option"<<endl;
                break;

        }
        } while (selection != 'q' && selection != 'Q');
    }