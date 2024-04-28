#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
class ATarget;

class ASpell
{
	protected:  
		std::string _name;
		std::string _effects;
	
	public:  
		ASpell(const std::string &name, const std::string &effects);
		virtual ~ASpell();
		ASpell(const ASpell &);
		ASpell &operator=(const ASpell &);

		const std::string &getName() const;
		const std::string &getEffects() const;

		virtual ASpell *clone() = 0;

		void launch(const ATarget &) const;
};

#endif