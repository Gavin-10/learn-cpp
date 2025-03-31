
#pragma once

#include <string>
#include <string_view>

class Car {
public:
    Car(std::string_view, std::string_view, int);
    virtual ~Car() = default;
public:
    virtual void detail() =0;

    void lock();
    void unlock();
    void toggleTrunk();
    void panic();

    bool getIsLocked();
    bool getTrunkIsOpen();
    bool getAlarmIsTriggered();
protected:
    bool isLocked = true;
    bool trunkIsOpen = false;
    bool alarmIsTriggered = false;

    std::string make;
    std::string model;
    int year;
};