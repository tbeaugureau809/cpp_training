#include <iostream>

using namespace std;

int main (){

    const double usd_per_eur {1.19};

    cout<<"Welcome to the EUR to USD converter"<<endl;
    cout<<"Enter the value in EUR:";
    
    double euro {0};
    double usd {0};

    cin>>euro;
    usd = euro*usd_per_eur;
    cout<<"Value in USD:"<<usd<<endl;

    
    cout << endl;
    return 0;

}