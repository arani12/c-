//This Coursework is  done by methusha vigneswaran
#include"game.h"
#include<algorithm>
#include<string>

game::game() {
    //maxTravelled = 0;
    furthestRobot = "nothing";
}
bool game::findRobotName(const string& name) {
    bool found = (find(RobotsName_list.begin(), RobotsName_list.end(), name) !=
        RobotsName_list.end());
    return found;
    //this code represents to test whether its indicating the names are true or false on the list or might not be found

}

void game::move(const string& name, int dir) {
    int n{};
    if (game_map.count(name) == 0) {
        game_map.emplace(name, robot());
    }

    if (dir == 0) {
        game_map.at(name).move_north();
        //moving robot to north would indicate =0
    }

    else if (dir == 1) {
        game_map.at(name).move_east();
        //moving robot to east would indicate =1

    }

    else if (dir == 2) {
        game_map.at(name).move_south();
        //moving robot to south would indicate =2
    }
    else if (dir == 3) {
        game_map.at(name).move_west();
        //moving robot to west would indicate =3
    }
    else {
        game_map.at(name).get_name();
    }

    if (game_map.at(name).travelled() <= n) {
        if (findRobotName(name) == false) {
            RobotsName_list.push_back(name);
        }
    }

    else {//able to delete robot name from the list
        if (findRobotName(name) == true) {
            RobotsName_list.remove(name);
        }
    }
    //this code below will calcualte the furthest robot as the distance is the largest
/*
     if (distance(game_map.at(name)) > maxTravelled) {
         maxTravelled = (distance(game_map.at(name)));
         furthestRobot = name;
     }*/
