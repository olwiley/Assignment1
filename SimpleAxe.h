#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
define COMMONSPEAR_H

class SimpleAxe : public Weapon {
	public:
		SimpleAxe() : Weapon("Simple Axe", 60){}
		virtual double hit(double armor);
};
#endif
