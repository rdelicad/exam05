#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock
{
	private:  
		std::string _name;
		std::string _title;
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();
		Warlock(const Warlock &);
		Warlock &operator=(const Warlock &);
		const std::string &getName() const;
		const std::string &getTitle() const;
		void setTitle(const std::string &);
		void introduce() const;
};

#endif