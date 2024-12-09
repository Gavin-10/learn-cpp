#ifndef DOG_H_
#define DOG_H_

#include "Feline.h"

class Dog final : public Feline {
    using Feline::Feline;
    public:
        ~Dog() = default;

        void bark() const;

        void run() const override final;
};

#endif