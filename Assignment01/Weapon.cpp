#include "Weapon.h"

Weapon::Weapon() : kAttackDmg(kAttackDmg)
{

}

Weapon::Weapon(const string& kName, const int& durability_, const int& kAttackDmg) : kAttackDmg(kAttackDmg)
{

}

Weapon::~Weapon()
{

}

void Weapon::receiveDamage(const int&)
{

}

const int Weapon::getAttackDmg()
{
	if (kAttackDmg < 0)
	{
		const int kAttackDmg = 0;
	}
	return kAttackDmg;
}