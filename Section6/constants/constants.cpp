#include <iostream>

using namespace std;

int main(){

    const double cost_per_room{30}; 
    const float days_valid{30};
    const double sales_tax{.06};

    cout<<"How many rooms will you need cleaned? ";
    int number_of_rooms{0};
    cin>>number_of_rooms;

    cout<<"\nEstimate for carpet cleaning service"<<endl;
    cout<<"Number of rooms: "<<number_of_rooms<<endl;
    cout<<"Cost per room: $"<<(number_of_rooms*cost_per_room)+(number_of_rooms*cost_per_room*sales_tax);



}