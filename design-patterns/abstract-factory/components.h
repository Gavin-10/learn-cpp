
#pragma once

class components {
public:
    virtual ~components() = default;
public:
    virtual void button() const =0;
    virtual void appBar() const =0;
    virtual void card() const =0;
};