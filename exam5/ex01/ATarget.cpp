#include "ATarget.hpp"

void ATarget::getHitBySpell(ASpell const &spell) const 
{
    std::cout   << getType()
                << " has been "
                << spell.getEffects()
                << "!\n";
}

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

ATarget::ATarget(std::string type) : _type(type) {}

std::string ATarget::getType() const 
{
    return _type;
}