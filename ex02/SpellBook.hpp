#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
    private:
        SpellBook(const SpellBook &);
        SpellBook &operator=(const SpellBook &);
        std::map<std::string, ASpell*> _spellBook;
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &spellname);
        ASpell *createSpell(std::string const &spellname);
};