/****************************************************************************/
/*!

*/
/****************************************************************************/

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

void Weapon::receiveDamage(const int& durability_)
{
	for (int i = durability_; i;)
	{
		if (this->durability_ = i)
		{
			this->durability_ = (i / 2);
			this->durability_ = durability_;
		}
	}
}

const int Weapon::getAttackDmg()
{
	if (kAttackDmg < 0)
	{
		const int kAttackDmg = 0;
	}
	return kAttackDmg;
}