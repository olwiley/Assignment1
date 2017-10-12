#include <string>
#include "Weapon.h"
#ifndef DOUBLESWORD_H
#define DOUBLESWORD_H

class DoubleSword : public Weapon{
	public:
		DoubleSword : Weapon("Double Sword", 35){}
		virtual double hit(double armor);
};
#endif
