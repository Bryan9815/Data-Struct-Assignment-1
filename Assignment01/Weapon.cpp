/****************************************************************************/
/*!
\file Weapon.cpp
\author Teh Kai Hong Bryan
\par	email: 150587A@mymail.nyp.edu.sg
\brief
Constructor, Destructor and Functions for the Weapon
*/
/****************************************************************************/

#include "Weapon.h"

/****************************************************************************/
/*!
\brief
Constructor

\param
		kName - string that takes in the name of the Dweller
		durability_ - takes in the value for the Weapon's durability_
		kAttackDmg - takes in the value for the Weapon's kAttackDmg

\exception None
\return None
*/
/****************************************************************************/

Weapon::Weapon(const string& kName, const int& durability_, const int& kAttackDmg) : GameObject(kName), Item(kName, durability_), kAttackDmg(kAttackDmg)
{
	
}

/****************************************************************************/
/*!
\brief
Destructor

\param None
\exception None
\return None
*/
/****************************************************************************/

Weapon::~Weapon()
{

}

/****************************************************************************/
/*!
\brief
sets the value for durability_ lost by Weapon

\param
	durability_ - takes in the value for the Weapon's durability_

\exception None
\return None
*/
/****************************************************************************/

void Weapon::receiveDamage(const int& durability_)
{
	this->durability_ -= durability_ / 2;
}

/****************************************************************************/
/*!
\brief
returns a copy of kAttackDmg

\param
		kAttackDmg - takes in the value for the Weapon's kAttackDmg

\exception None
\return None
*/
/****************************************************************************/

const int Weapon::getAttackDmg()
{
	if (kAttackDmg < 0)
	{
		const int kAttackDmg = 0;
	}
	return kAttackDmg;
}