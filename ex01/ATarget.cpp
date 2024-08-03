#include "ATarget.hpp" 

ATarget::ATarget(std::string type)
: _type(type)
{}

ATarget::~ATarget() {}

ATarget::ATarget(const ATarget &copy)
{
    *this = copy;
}

ATarget &ATarget::operator=(const ATarget &other)
{
    _type = other._type;
    return *this;
}

const std::string &ATarget::getType() const
{
    return _type;
}

void ATarget::getHitBySpell(const ASpell &target) const
{
    std::cout << getType() << " has been " << target.getEffects() << "!\n";
}

