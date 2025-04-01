
#pragma once

class Totalable {
public:
    virtual ~Totalable() = default;
public:
    virtual int getTotal() const =0;
};