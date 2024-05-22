#ifndef BRIKWALL_HPP
#define BRIKWALL_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:  
		BrickWall();
		~BrickWall();
		ATarget *clone() const;
};

#endif