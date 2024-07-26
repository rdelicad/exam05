#include "ASpell.hpp"

void ASpell::launch(ATarget const &target) const
{
    target.getHitBySpell(*this);
}

ASpell::ASpell(const std::string &name, const std::string &effects)
: _name(name), _effects(effects)
{
}

ASpell::ASpell(const ASpell &copy)
{
    *this = copy;
}

ASpell &ASpell::operator=(ASpell const &other)
{
    _name = other.getName();
    _effects = other.getEffects();
    return *this;
}

ASpell::~ASpell() {}

std::string ASpell::getName() const 
{
    return _name;
}

std::string ASpell::getEffects() const 
{
    return _effects;
}