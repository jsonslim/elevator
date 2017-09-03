#include <iostream>
//#include <stdio.h>

using namespace std;

int floors_count;

class elevator
{
    int current_floor, req_floor;
    int direction;
    bool doors_stat;

public:
    void floor();
    void direction_cabin(int n);
    void control_panel();
    void doors_state(bool doors_stat);

};

void elevator::control_panel()
{
    cout << "Enter floor" << endl;
    cin >> req_floor;
    if (req_floor == current_floor)
    {
        cout << "You already at this floor" << endl;
        doors_stat = 1;
    }
}

void elevator::direction_cabin(int n)
{
    int direction = n;
    switch (n)
    {
        case 0: cout << "STOPED" << endl;
        break;
        case 1: cout << "Going down" << endl;
        break;
        case 2: cout << "Going up" << endl;
        break;
    }

}

void elevator::floor()      //git comm
{
    cout << "Enter quantity of floors in the house" << endl;
    cin >> floors_count;
    cout << "There is" << " " << floors_count << " " << "floors in the house" << endl;
}

int main()
{
    cout << "This is elevator program" << endl;
    elevator objFloor;
    objFloor.floor();
    return 0;
}
