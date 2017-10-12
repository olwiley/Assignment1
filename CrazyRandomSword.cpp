#include "CrazyRandomSword"
#include <random>

double CrazyRandomSword::hit(double armor){
	double damage = (random())%100;
	return (damage-(random()%damage/2));
}
