#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected:  
		std::string _type;

	public: 
		ATarget(const std::string &type);
		virtual ~ATarget();
		ATarget(const ATarget &);
		ATarget &operator=(const ATarget &);

		const std::string &getType() const;

		virtual ATarget *clone() = 0;

		void getHitBySpell(const ASpell &) const;
};

#endif