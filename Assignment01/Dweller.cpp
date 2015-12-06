#include "Dweller.h"

Dweller::Dweller(const string& Dweller, const int& SPECIAL_) : Outfit(*outfit_), Weapon(*weapon_)
{
	
}

const int Dweller::getSPECIAL()
{
	return SPECIAL_;
}

const int Dweller::getCurrentHealth()
{
	return health_;
}

const int Dweller::CurrentRadDamage()
{
	return radiation_;
}

const int Dweller::getAttackDmg()
{
	return 0;
}

void Dweller::setPosition(const Vec2D& position_)
{
	this->position_ = position_;
}

const Vec2D Dweller::getPosition()
{
	return position_;
}

void Dweller::receiveHealthDamage(const int& health_)
{
	this->health_ = health_;
}

void Dweller::receiveRadDamage(const int& radiation_)
{
	this->radiation_ = radiation_;
}

void Dweller::receiveEquipmentDamage(const int&)
{
	
}

void Dweller::addStimpak(const int& stimpak_)
{
	this->stimpak_ = stimpak_;
}

void Dweller::addRadAway(const int& radaway_)
{
	this->radaway_ = radaway_;
}

void Dweller::useStimpak()
{
	
}

void Dweller::useRadAway()
{
	
}

Outfit* Dweller::assignOutfit(Outfit*)
{
	return 0;
}

Weapon* Dweller::assignWeapon(Weapon*)
{
	return 0;
}