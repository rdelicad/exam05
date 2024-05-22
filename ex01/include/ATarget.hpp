#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected:  
		std::string _type;
	public:  
		ATarget(const std::string type);
		virtual ~ATarget();
		ATarget(const ATarget &copy);
		ATarget &operator=(const ATarget &other);

		const std::string &getType() const;

		virtual ATarget *clone() const = 0;

		void getHitBySpell(const ASpell &effects) const;
};

#endif