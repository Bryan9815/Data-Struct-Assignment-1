#include "Dweller.h"

Dweller::Dweller()
{
	
}

Dweller::Dweller(const string& kName, const int& SPECIAL_) : Outfit(*outfit_), Weapon(*weapon_)
{
	
}

Dweller::~Dweller()
{
	
}

const int Dweller::getSPECIAL()
{
	int Luck = 0;
	int Strength = 0;
	int Perception = 0;
	int Endurance = 0;
	int Charisma = 0;
	int Intelligence = 0;
	int Agility = 0;

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
	this->position_ = Vec2D(0, 0);
	this->position_ = position_;
}

const Vec2D Dweller::getPosition()
{
	return position_;
}

void Dweller::receiveHealthDamage(const int& health_)
{
	if (health_ >(100 - radiation_))
	{
		this->health_ = (100 - radiation_);
	}

	this->health_ = 100;
	this->health_ = health_;
}

void Dweller::receiveRadDamage(const int& radiation_)
{
	if (radiation_ > 100)
	{
		this->radiation_ = 100;
	}
	if (radiation_ < 0)
	{
		this->radiation_ = 0;
	}
	this->radiation_ = 0;
	this->radiation_ = radiation_;
}

void Dweller::receiveEquipmentDamage(const int&)
{
	
}

void Dweller::addStimpak(const int& stimpak_)
{
	this->stimpak_ = 0;
	this->stimpak_ = stimpak_;
}

void Dweller::addRadAway(const int& radaway_)
{
	this->radaway_ = 0;
	this->radaway_ = radaway_;
}

void Dweller::useStimpak()
{
	health_ += 20;
}

void Dweller::useRadAway()
{
	radiation_ -= 10;
}

Outfit* Dweller::assignOutfit(Outfit*)
{
	Outfit* assignOutfit = 0;

	return outfit_;
}

Weapon* Dweller::assignWeapon(Weapon*)
{
	Weapon* assignWeapon = 0;

	return weapon_;
}

bool Dweller::isDead()
{
	if (health_ < 1)
	{
		bool isDead = true;
		cout << "Dweller has died" << endl;
	}
	if (health_ > 1)
	{
		bool isDead = false;
	}

	return 0;
}