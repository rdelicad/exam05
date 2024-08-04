#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() 
{
    for (std::map<std::string, ASpell*>::iterator it = _spellBook.begin(); it != _spellBook.end(); it++)
        delete it->second;
    _spellBook.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
    if (spell)
        if (_spellBook.find(spell->getName()) == _spellBook.end())
            _spellBook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &spellname)
{
    if (_spellBook.find(spellname) != _spellBook.end())
        _spellBook.erase(_spellBook.find(spellname));
}

ASpell *SpellBook::createSpell(std::string const &spellname)
{
    ASpell *tmp = NULL;
    if (_spellBook.find(spellname) != _spellBook.end())
        tmp = _spellBook[spellname];
    return (tmp);
}