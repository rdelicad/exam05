#include "../include/SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
	for (std::vector<ASpell *>::iterator it = _spells.begin(); it != _spells.end(); it++)
		delete *it;
	_spells.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
	for (std::vector<ASpell *>::iterator it = _spells.begin(); it != _spells.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	_spells.push_back(spell->clone());
}

void SpellBook::forgetSpell(std::string const &spellName)
{
	for (std::vector<ASpell *>::iterator it = _spells.begin(); it != _spells.end(); it++)
	{
		if ((*it)->getName() == spellName)
		{
			delete *it;
			_spells.erase(it);
			return ;
		}
	}
}

ASpell *SpellBook::createSpell(std::string const &spellName)
{
	for (std::vector<ASpell *>::iterator it = _spells.begin(); it != _spells.end(); it++)
	{
		if ((*it)->getName() == spellName)
			return (*it)->clone();
	}
	return (NULL);
}
