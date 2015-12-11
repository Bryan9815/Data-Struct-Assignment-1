#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

class Weapon : virtual public Item
{
public:
	Weapon();
	Weapon(const string&, const int&, const int&);
	~Weapon();

	virtual void receiveDamage(const int&);

	const int getAttackDmg();
private:
	const int kAttackDmg;
protected:

};
#endif //WEAPON_H