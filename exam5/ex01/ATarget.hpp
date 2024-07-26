#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
        std::string _type;
    public:
        virtual ~ATarget();
        ATarget(const ATarget &copy);
        ATarget &operator=(const ATarget &other);
        ATarget(std::string type);

        std::string getType() const;
        virtual ATarget *clone() const = 0;
        void getHitBySpell(ASpell const &spell) const;
};