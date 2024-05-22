#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
: _name(name), _title(title)
{
	std::cout	<< getName()
				<< ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << getName()
				<< ": My job here is done!\n";
}

const std::string &Warlock::getName() const
{
	return _name;
}

const std::string &Warlock::getTitle() const
{
	return _title;
}

void Warlock::setTitle(const std::string &title)
{
	_title = title;
}

void Warlock::introduce() const
{
	std::cout	<< getName()
				<< ": I am " << getName()
				<< ", " << getTitle() << "!\n";
}

void Warlock::learnSpell(ASpell *spell)
{
	std::vector<ASpell *>::iterator it = _spells.begin();
	std::vector<ASpell *>::iterator ite = _spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spell->getName())
			return ;
		it++;
	}
	_spells.push_back(spell);
}

void Warlock::forgetSpell(std::string spellName)
{
	std::vector<ASpell *>::iterator it = _spells.begin();
	std::vector<ASpell *>::iterator ite = _spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spellName)
		{
			delete *it;
			_spells.erase(it);
			return ;
		}
		it++;
	}
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	std::vector<ASpell *>::iterator it = _spells.begin();
	std::vector<ASpell *>::iterator ite = _spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spellName)
		{
			(*it)->launch(target);
			return ;
		}
		it++;
	}
}