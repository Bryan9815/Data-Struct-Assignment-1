#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

class Weapon : public Item
{
public:
	Weapon();
	Weapon(const string&, const int&, const int&);
	~Weapon();

	const int getAttackDmg();
private:
	const int kAttackDmg;
protected:

};
#endif //WEAPON_H