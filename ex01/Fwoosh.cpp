#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
: ASpell("Fwoosh", "fwooshed")
{}

Fwoosh::~Fwoosh() {}

Fwoosh::Fwoosh(const Fwoosh &copy)
: ASpell(copy)
{}

Fwoosh &Fwoosh::operator=(const Fwoosh &other)
{
	if (this != &other)
		ASpell::operator=(other);
	return *this;
}

Fwoosh *Fwoosh::clone() const
{
	return new Fwoosh(*this);
}