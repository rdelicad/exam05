#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock
{
	private:
    std::string _name;
    std::string _title;

    Warlock(const Warlock &);
    Warlock &operator=(const Warlock &);

  public:
    Warlock(std::string const &name, std::string const &title);
    ~Warlock();

    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string &);
    void introduce() const;
};


#endif
