#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
    private:
        Warlock(const Warlock &);
        Warlock &operator=(const Warlock &);

        std::string _name;
        std::string _title;
        std::map<std::string, ASpell*> _spellBook;
    public:
        Warlock(const std::string &name, const std::string &title);
        ~Warlock();

        const std::string &getName() const;
        const std::string &getTitle() const;
        void setTitle(const std::string &name);

        void introduce() const;

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spellname);
        void launchSpell(std::string spellname, const ATarget &target);
};