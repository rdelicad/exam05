
#include "ATarget.hpp"

ATarget::ATarget(const std::string &type)
: _type(type)
{}

ATarget::~ATarget() {}

const std::string &ATarget::getType() const
{
	return _type;
}


void ATarget::getHitBySpell(const ASpell &effects) const
{
	std::cout << getType()
			<< " has been "
			<< effects.getEffects()
			<< "!" << std::endl;
}

