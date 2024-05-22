#include "../include/ATarget.hpp"

ATarget::ATarget(const std::string type)
: _type(type)
{}

ATarget::~ATarget()
{}

ATarget::ATarget(const ATarget &copy)
: _type(copy._type)
{}

ATarget &ATarget::operator=(const ATarget &other)
{
	if (this != &other)
		_type = other._type;
	return *this;
}

const std::string &ATarget::getType() const
{
	return _type;
}

void ATarget::getHitBySpell(const ASpell &effects) const
{
	std::cout	<< getType()
				<< " has been "
				<< effects.getEffects()
				<< "!"
				<< std::endl;
}

