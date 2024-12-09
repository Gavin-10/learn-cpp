#ifndef CAT_H_
#define CAT_H_

#include "Feline.h"

class Cat final : public Feline {
    using Feline::Feline;
    public:
        ~Cat() = default;

        void meow() const;

        void run() const override final;

};

#endif