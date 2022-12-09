//This coursework is done by Methusha Vigneswaran
#pragma once
#ifndef game_h
#define game_h
#include"robot.h"
#include<string>
#include<list>
#include<stdio.h>
#include<map>
#include<vector>
#include<iostream>
#include <algorithm>

using namespace std;
class game {
    //private:
    map<string, robot>game_map;
    //this is the map that holds the robots
    typedef map<string, robot>::const_iterator iter;
    //this code above implements the iterator of the map
    list<string>RobotsName_list;
    //longest distance of any robot that is the furthest away from the origin

    //int maxTravelled=0;
    string furthestRobot;

public:
    game();
    int num_robots()const {
        return game_map.size();
        //default constructor
        //this code implements that the returning of whole number of robots is in the game
        //return number is nothing
    }
    void move(const string& name, int dir);
    bool findRobotName(const string& name);
    int num_within(int n)const {
        int counter = 0;
        for (auto& r : game_map) {
            if (distance(r.second) <= n);
            counter++;
        }
        return counter;
    }

    int max_travelled()const {
        int maxTravelled = 0;
        for (auto& r : game_map) {
            int travel = r.second.travelled();
            if (travel > maxTravelled)
                maxTravelled = travel;
        }
        return maxTravelled;
        // this code implements that the further travel of the robot  will be the further distance from the set origin.
    }
    string furthest()const {
        return furthestRobot;
        //this code implements that the returning'name' for the robot will indicate further distance travel from origin.
    }

    vector<string> robots_by_distance() const {

        vector<pair<int, string>>vector1;
        for (auto& r : game_map) {
            int dist = distance(r.second);
            vector1.push_back({ dist, r.first });
        }
        sort(vector1.begin(), vector1.end());
        vector<string> names;

        for (auto& elem : vector1) { 
            names.push_back(elem.second);
        }
        return names;
    }
};
#endif
