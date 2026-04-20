#include <iostream> 
#include <vector> 

using namespace std; 

int main() {
    char selection {};
    vector<int> numbers{};
    int number{};
    double mean{};
    int sum{};
    int smallest{};
    int largest{};


    do {
        cout<<"\n----------------------------"<<endl;
        cout<<"Please make a selection from the below"<<endl<<endl;
        cout<<"P - print"<<endl;
        cout<<"A - add a number"<<endl;
        cout<<"M - display the mean of the numbers"<<endl;
        cout<<"S - display the smallest number"<<endl;
        cout<<"L - display the largest number"<<endl;
        cout<<"Q - quit"<<endl;

        cout<<"\nEnter your choice: ";
        cin>>selection;

        switch(selection) {
            
            //Printing of numbers//
            case 'P':
            case 'p':
                if(numbers.size() < 1) {
                    cout<<"Currently no numbers entered";
                } else {
                    for(size_t i = 0; i < numbers.size() ; i++) {
                        cout<<numbers[i]<<" ";
                    }
                }
                break;
            //Adding of numbers//
            case 'A':
            case 'a':
                cout<<"Enter a number to be added to your selection: ";
                cin>>number;
                numbers.push_back(number);
                break;

            //Mean of numbers//
            case 'M':
            case 'm':
                if(numbers.size() < 1) {
                    cout<<"Unable to calculate mean as there are no numbers";
                }
                else {
                    for(size_t i=0; i < numbers.size(); i++) {
                        sum +=numbers[i];
                    }
                    mean = (sum / numbers.size());
                    cout<<"The mean is "<<mean<<endl;
                }
                break;
            //Smallest number//
            case 'S':
            case 's':
             if(numbers.size() < 1) {
                    cout<<"No numbers have been added yet";
                } 
            else {
                smallest = numbers[0];
                for(size_t i = 0; i < numbers.size(); i++) {
                    if (numbers[i] < smallest) {
                        smallest = numbers[i];
                    }
                }
            }
            
                cout<<"The smallest number is "<<smallest<<endl;
                break;

            //Largest number//
            case 'L':
            case 'l': 
                if(numbers.size() < 1) {
                    cout<<"No numbers have been added yet";
                } 
            else {
                largest = numbers[0];
                for(size_t i = 0; i < numbers.size(); i++) {
                    if (numbers[i] > largest) {
                        largest = numbers[i];
                    }
                }
            }
            
                cout<<"The largest number is "<<largest<<endl;
                break;
            case 'Q':
            case 'q':
                cout<<"Will be the quit";
                break;
                
                default:
                cout<<"Sorry, please choose a valid option"<<endl;
                break;
        }  
    }  while (selection!='q' && selection != 'Q');
      
        
}