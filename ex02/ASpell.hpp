#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string _name;
        std::string _effects;
    public:
        ASpell(std::string name, std::string effects);
        ASpell(const ASpell &copy);
        ASpell &operator=(const ASpell &other);
        virtual ~ASpell();

        std::string getName() const;
        std::string getEffects() const;

        virtual ASpell *clone() const = 0;

        void launch(const ATarget &target);
};