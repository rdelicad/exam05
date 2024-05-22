#ifndef ASPELL_HPP
#define ASPELL_HPP	

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected:
		std::string _name;
		std::string _effects;
	public:  
		ASpell(const std::string &name, const std::string &effects);
		virtual ~ASpell();
		ASpell(const ASpell &copy);
		ASpell &operator=(const ASpell &other);

		const std::string &getName() const;
		const std::string &getEffects() const;

		virtual ASpell *clone() const = 0;

		void launch(const ATarget &name) const;
};

#endif