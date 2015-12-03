#ifndef DWELLER_H
#define DWELLER_H

#include "Weapon.h"
#include "Outfit.h"
#include "Vec2D.h"

class Dweller : public Outfit, Weapon
{
public:
	Dweller();
	Dweller(const string&, const int&);
	~Dweller();
	
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

	Outfit* assignOutfit(Outfit*);
	Weapon* assignWeapon(Weapon*);

	bool isDead();
private:
	Vec2D position;
	int SPECIAL;
	int health;
	int radiation;
	int stimpak;
	int radaway;
	Outfit *outfit;
	Weapon *weapon;
protected:

};

#endif //DWELLER_H