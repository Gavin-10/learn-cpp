
#pragma once

#include "builder.h"
#include "house.h"

class ConcreteBuilder1 : public Builder {
public:
    ConcreteBuilder1();
    ~ConcreteBuilder1();
public:
    void reset();
    void buildDescription() const override;
    void buildRooms() const override;
    void buildWindows() const override;
    void buildColor() const override;
    void buildGarden() const override;
    void buildGarage() const override; 
    House* getHouse();
private:
    House* house;
};