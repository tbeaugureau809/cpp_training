#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vector1{};
    vector<int> vector2{};

    vector1.push_back(10);
    vector1.push_back(20);

    cout<<"Vector1 information:"<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<size(vector1)<<endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout<<"Vector2 information:"<<endl;
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<<size(vector2)<<endl;

    vector<vector<int>> vector2d {};
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    cout<<"Vector2d information:"<<endl;
    cout<<vector2d.at(0).at(0)<<" ";
    cout<<vector2d.at(0).at(1)<<endl;
    cout<<vector2d.at(1).at(0);
    cout<<vector2d.at(1).at(1);

    vector1.at(0) = 1000;
    
    cout<<"Updated Vector2d information:"<<endl;
    cout<<vector2d.at(0).at(0)<<" ";
    cout<<vector2d.at(0).at(1)<<endl;
    cout<<vector2d.at(1).at(0);
    cout<<vector2d.at(1).at(1);

    cout<<"New vector1:";
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1);
}