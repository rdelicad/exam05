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