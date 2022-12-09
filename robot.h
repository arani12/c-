//this is coursework is done by methusha vigneswaran
#pragma once
#ifndef robot_h
#define robot_h
#include<string>
#include<iostream>
#include<stdio.h>

using namespace std;
class robot
{
protected:
    string robot_name;
    int countStep;
    int position_North;
    int position_East;
    int total_position;


public:
    explicit robot();
    const std::string& name() const {
        return robot_name;
    }
    void move_north();
    void move_east();
    void move_south();
    void move_west();
    int north()const {
        return position_North;
    }
    int east() const {
        return position_East;

    }
    int travelled()const {
        return countStep;
    }

    void set_name(const string& n);
    const string get_name()const;
};
int distance(const robot& r);
#endif
