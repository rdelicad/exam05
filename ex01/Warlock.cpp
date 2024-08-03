#include "Warlock.hpp" 

Warlock::Warlock(const std::string &name, const std::string &title)
: _name(name), _title(title)
{
    std::cout << getName() << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
    std::cout << getName() << ": My job here is done!\n";
    for (std::map<std::string, ASpell*>::iterator it = _spellBook.begin(); it != _spellBook.end(); it++)
        delete it->second;
    _spellBook.clear();
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
    std::cout << getName() << ": I am "  << getName() << ", " << getTitle() << "!\n";
}

void Warlock::learnSpell(ASpell *spell)
{
    if (spell)
        if (_spellBook.find(spell->getName()) == _spellBook.end())
            _spellBook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string spellname)
{
    if (_spellBook.find(spellname) != _spellBook.end())
        _spellBook.erase(spellname);
}

void Warlock::launchSpell(std::string spellname, const ATarget &target)
{
    if (_spellBook.find(spellname) != _spellBook.end())
        _spellBook[spellname]->launch(target);
}