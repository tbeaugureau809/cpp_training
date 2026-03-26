#include <iostream>

using namespace std;

int main(){
    char vowels[] {'a','e','i','o','u'};
    cout<<"The first vowel:"<<vowels[0]<<endl;

    cout<<"Enter a new character: ";
    cin>>vowels[10];
    cout<<"The last vowel:"<<vowels[4];
    
    return 0;

}