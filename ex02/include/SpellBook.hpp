#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"

class SpellBook
{
	private:
		std::vector<ASpell *> _spells;
		SpellBook(const SpellBook &other);
		SpellBook &operator=(const SpellBook &other);

	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellName);
		ASpell *createSpell(std::string const &spellName);
};

#endif



