#include <iostream>

using namespace std;

int main()
{
    double room_width{};
    double room_length{};
    double room_height{};
    double room_area{};


   cout<<"What is the width of the room?: ";
   cin>>room_width;
   
   cout<<"What is the length of the room?:  ";
   cin>>room_length;

   cout<<"What is the height of the room? ";
   cin>>room_height;

   room_area = (room_width*room_length*room_height);

   cout << "Area of room is " << room_area<<endl;


   return 0;
}