#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:  
		Fwoosh();
		~Fwoosh();
		Fwoosh(const Fwoosh &);
		Fwoosh &operator=(const Fwoosh &);
		virtual Fwoosh *clone() const;
};

#endif