#include <iostream>
#include <vector>

using namespace std;

int main() {

    int grid[5][3] {};

    for (int row{0}; row < 5 ; ++row) {
        for (int col {0}; col < 3; ++col) {
            grid[row][col] = 10;
            cout << grid[row];
        }
        cout<<""<<endl;
    }

}