#include "Warlock.hpp" 

Warlock::Warlock(const std::string &name, const std::string &title)
: _name(name), _title(title)
{
    std::cout << getName() << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
    std::cout << getName() << ": My job here is done!\n";
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
    _spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellname)
{
    _spellBook.forgetSpell(spellname);
}

void Warlock::launchSpell(std::string spellname, const ATarget &target)
{
    if (_spellBook.createSpell(spellname))
        _spellBook.createSpell(spellname)->launch(target);
}