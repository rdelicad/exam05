#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
: _name(name), _title(title)
{
    std::cout   << getName() 
                << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
    std::cout   << getName() 
                << ": My job here is done!\n";
    for (std::map<std::string, ASpell*>::iterator it = _spellBook.begin(); it != _spellBook.end(); ++it) {
        delete it->second;
    }
    _spellBook.clear();
}

void Warlock::introduce() const
{
    std::cout   << getName() 
                << ": I am "
                << getName() << ", "
                << getTitle() << "!\n";
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

void Warlock::learnSpell(ASpell *spell)
{
    if (spell)
        if (_spellBook.find(spell->getName()) == _spellBook.end())
            _spellBook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string spellName)
{
    if (_spellBook.find(spellName) != _spellBook.end())
        _spellBook.erase(_spellBook.find(spellName));
}

void Warlock::launchSpell(std::string spellName, ATarget const &target)
{
    if (_spellBook.find(spellName) != _spellBook.end())
        _spellBook[spellName]->launch(target);
}