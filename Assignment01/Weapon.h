/****************************************************************************/
/*!
\file Weapon.h
\author Teh Kai Hong Bryan
\par	email: 150587A@mymail.nyp.edu.sg
\brief
Header file containing Weapon Class
*/
/****************************************************************************/

#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

/****************************************************************************/
/*!
			Class Weapon:
\brief	A Class derived from Item that contains functions and variables
*/
/****************************************************************************/

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