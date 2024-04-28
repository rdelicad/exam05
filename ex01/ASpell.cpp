#include "ASpell.hpp"


ASpell::ASpell(const std::string &name, const std::string &effects)
: _name(name), _effects(effects)
{}

ASpell::~ASpell() {};

const std::string &getName() const
{
	return _name;
}

const std::string &getEffects() const
{
	return _effects;
}

void ASpell::launch(const ATarget &obj) const
{
	obj.getHitBySpell(*this);
}
