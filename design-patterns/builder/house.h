
#pragma once

#include <iostream>
#include <string>

class House {
public:
    void ListParts() const;
public:
    std::string description;
    std::string color;
    int numRooms = 3;
    int numWindows = 10;
    bool garden = false;
    bool garage = false;
    int numCars = 0;
};