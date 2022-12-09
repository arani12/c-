//This coursework is done by Methusha Vigneswaran
//robot.cpp

#include"robot.h"
#include<cstdlib>
#include<string>

/*  robot class implement*/

robot::robot() {
    position_North = 0;
    position_East = 0;
    total_position = 0;
    countStep = 0;

}

void robot::set_name(const string& n) {
    robot_name = n;
    //this below code  will implement the set name of robot
}
const string robot::get_name()const {
    return robot_name;

}
void robot::move_north() {
    position_North++;
    countStep++;
    total_position++;
}
void robot::move_east() {
    position_East++;
    countStep++;
    total_position++;
}
void robot::move_south() {
    position_North--;
    countStep++;
    total_position++;
}
void robot::move_west() {
    position_East--;
    countStep++;
    total_position++;
    //moving to the dir4ection of :north,east,south,west.

}


int distance(const robot& r) {
    return abs(r.north()) + abs(r.east());
    //The value will appear negative
}



