#include <string>
#include "Weapon.h"
#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon{
	public:
		CrazyRandomSword : Weapon("Crazy Random Sword, 0){}
		virtual double hit(double armor);
};
#endif
