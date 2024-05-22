#ifndef FIREWALL_HPP
#define FIREWALL_HPP

#include "ASpell.hpp"

class Fireball : public ASpell
{
	public:  
		Fireball();
		~Fireball();

		ASpell *clone() const;
};

#endif