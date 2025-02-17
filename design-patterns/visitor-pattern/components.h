
#pragma once

#include <memory>

class Visitor;
class CompA;
class CompB;

class Component {
public:
    virtual ~Component() = default;
public:
    virtual int accept(std::shared_ptr<Visitor>) const =0;
};

class Visitor {
public:
    virtual int visitCompA(const std::shared_ptr<CompA>) const =0;
    virtual int visitCompB(const std::shared_ptr<CompB>) const =0;
};

class CompA: public Component {
public:
    CompA(int, int, int);
public:
    int accept(std::shared_ptr<Visitor>) const override;
public:
    int a;
    int b;
    int c;
};

class CompB: public Component {
public:
    CompB(int, int);
public:
    int accept(std::shared_ptr<Visitor>) const override;
public:
    int a;
    int b;
};

