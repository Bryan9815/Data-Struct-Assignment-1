/****************************************************************************/
/*!

*/
/****************************************************************************/

#include "Weapon.h"

Weapon::Weapon(const string& kName, const int& durability_, const int& kAttackDmg) : GameObject(kName), Item(kName, durability_), kAttackDmg(kAttackDmg)
{
	cout << "Weapon: kName: " << kName << ", durability_: " << durability_ << ", kAttackDmg: " << kAttackDmg << endl;
}

Weapon::~Weapon()
{

}

void Weapon::receiveDamage(const int& durability_)
{
	this->durability_ = durability_ / 2;
	cout << "w->receiveDamage tested successfully: " << durability_ << endl;
}

const int Weapon::getAttackDmg()
{
	if (kAttackDmg < 0)
	{
		const int kAttackDmg = 0;
	}
	cout << "w->getAttackDmg tested successfully" << endl;
	return kAttackDmg;
}