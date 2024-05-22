#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
#include <vector>

class Warlock
{
	private:
    std::string _name;
    std::string _title;
    std::vector<ASpell *> _spells;

    Warlock(const Warlock &);
    Warlock &operator=(const Warlock &);

  public:
    Warlock(std::string const &name, std::string const &title);
    ~Warlock();

    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string &);
    void introduce() const;

    void learnSpell(ASpell *spell);
    void forgetSpell(std::string spellName);
    void launchSpell(std::string spellName, ATarget &target);
};


#endif
