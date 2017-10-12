#include "DoubleSword"

double DoubleSword::hit(double armour){
	double damage = hitPoints;
	if(hitPoints > armour*2)
		return damage*2;
	else
		return damage;
}
