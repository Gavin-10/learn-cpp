#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>
#include <string_view>
#include <iostream>

class Animal {
    public:
        Animal() = default;
        Animal(std::string_view);
        virtual ~Animal() = default;

        virtual void breath() const;

    protected:
        std::string description;

};

#endif