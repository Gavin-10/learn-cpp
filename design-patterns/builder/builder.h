

#pragma once

class Builder {
public:
    virtual ~Builder() = default;
public:
    virtual void buildDescription() const =0;
    virtual void buildRooms() const =0;
    virtual void buildWindows() const =0;
    virtual void buildColor() const =0;
    virtual void buildGarden() const =0;
    virtual void buildGarage() const =0;
};