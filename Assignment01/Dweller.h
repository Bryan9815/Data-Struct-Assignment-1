/****************************************************************************/
/*!
\file Dweller.h
\author Teh Kai Hong Bryan
\par	email: 150587A@mymail.nyp.edu.sg
\brief
Header file containing Dweller Class
*/
/****************************************************************************/

#ifndef DWELLER_H
#define DWELLER_H

#include "Weapon.h"
#include "Outfit.h"
#include "Vec2D.h"

/****************************************************************************/
/*!
			Class Dweller:
\brief	A Class derived from Outfit and Weapon that contains functions and variables
*/
/****************************************************************************/

class Dweller : public GameObject
{
public:
	Dweller(const string&, const int&);
	virtual ~Dweller();
	
	const int getSPECIAL();
	const int getCurrentHealth();
	const int CurrentRadDamage();
	const int getAttackDmg();
	
	void setPosition(const Vec2D&);
	const Vec2D getPosition();
	
	void receiveHealthDamage(const int&);
	void receiveRadDamage(const int&);
	void receiveEquipmentDamage(const int&);
	void addStimpak(const int&);
	void addRadAway(const int&);
	void useStimpak();
	void useRadAway();

	virtual void receiveDamage(const int&);

	Outfit* assignOutfit(Outfit*);
	Weapon* assignWeapon(Weapon*);

	bool isDead();
private:
	Vec2D position_;
	int SPECIAL_;
	int health_;
	int radiation_;
	int stimpak_;
	int radaway_;
	Outfit *outfit_;
	Weapon *weapon_;
protected:

};

#endif //DWELLER_H