#include <iostream>

using namespace std;

int main(){

    const double price_small_room{25};
    const double price_large_room{35};
    const double sales_tax{.06};

    cout<<"How many small rooms need cleaning?:";
    int quantity_small_room{0};
    cin>>quantity_small_room;

    cout<<"How many big rooms need cleaning?:";
    int quantity_big_room{0};
    cin>>quantity_big_room;

    float total_cost{0};
    total_cost = ((quantity_small_room*price_small_room) + (quantity_big_room*price_large_room));
    float cost_w_tax{0};
    cost_w_tax = total_cost + (total_cost*sales_tax);
    
    cout<<cost_w_tax;

    return 0;
}