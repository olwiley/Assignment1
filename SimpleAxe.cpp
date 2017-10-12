#include "SimpleAxe.h"

double SimpleAxe::hit(double armor){
	double damage = hitPoints;
	if(armor > 0 && armor  < 20)
		return damage;
	else
		return damage-armor;
}
