#include "Weapon.h"

Weapon::Weapon() : kAttackDmg(kAttackDmg)
{

}

Weapon::Weapon(const string& kName, const int& durability, const int&kAttackDmg) : kAttackDmg(kAttackDmg)
{

}

const int Weapon::getAttackDmg()
{
	return kAttackDmg;
}