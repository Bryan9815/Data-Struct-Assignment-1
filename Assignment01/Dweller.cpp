/****************************************************************************/
/*!
\file Dweller.cpp
\author Teh Kai Hong Bryan
\par	email: 150587A@mymail.nyp.edu.sg
\brief
Constructor, Destructor and Functions for the Dweller character
*/
/****************************************************************************/

#include "Dweller.h"

/****************************************************************************/
/*!
\brief
Constructor

\param
		kName - string that takes in the name of the Dweller
		SPECIAL_ - takes in the values for the Dweller's stats

\exception None
\return None
*/
/****************************************************************************/

Dweller::Dweller(const string& kName, const int& SPECIAL_) : GameObject(kName), position_(0, 0), SPECIAL_(SPECIAL_), health_(100), radiation_(0), stimpak_(0), radaway_(0), outfit_(NULL), weapon_(NULL)
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

Dweller::~Dweller()
{
	
}

/****************************************************************************/
/*!
\brief
return a copy of SPECIAL_

\param SPECIAL_ - takes in the values for the Dweller's stats
\exception None
\return None
*/
/****************************************************************************/

const int Dweller::getSPECIAL()
{
	if (outfit_ != 0)
	{
		outfit_->getSPECIAL();
	
		int strength, perception, endurance, charisma, intelligence, agility, luck;

		int Dwellerstrength = (SPECIAL_ / 1000000);

		int Dwellerperception = (SPECIAL_ / 100000) - (Dwellerstrength * 10);

		int Dwellerendurance = (SPECIAL_ / 10000) - (Dwellerstrength * 100) - (Dwellerperception * 10);

		int Dwellercharisma = (SPECIAL_ / 1000) - (Dwellerstrength * 1000) - (Dwellerperception * 100) - (Dwellerendurance * 10);

		int Dwellerintelligence = (SPECIAL_ / 100) - (Dwellerstrength * 10000) - (Dwellerperception * 1000) - (Dwellerendurance * 100) - (Dwellercharisma * 10);

		int Dwelleragility = (SPECIAL_)-(Dwellerstrength * 100000) - (Dwellerperception * 10000) - (Dwellerendurance * 1000) - (Dwellercharisma * 100) - (Dwellerintelligence * 10);

		int Dwellerluck = (SPECIAL_)-(Dwellerstrength * 100000) - (Dwellerperception * 100000) - (Dwellerendurance * 10000) - (Dwellercharisma * 1000) - (Dwellerintelligence * 100) - (Dwelleragility * 10);

		int Outfitstrength = (outfit_->getSPECIAL() / 1000000);

		int Outfitperception = (outfit_->getSPECIAL() / 100000) - (Outfitstrength * 10);

		int Outfitendurance = (outfit_->getSPECIAL() / 10000) - (Outfitstrength * 100) - (Outfitperception * 10);

		int Outfitcharisma = (outfit_->getSPECIAL() / 1000) - (Outfitstrength * 1000) - (Outfitperception * 100) - (Outfitendurance * 10);

		int Outfitintelligence = (outfit_->getSPECIAL() / 100) - (Outfitstrength * 10000) - (Outfitperception * 1000) - (Outfitendurance * 100) - (Outfitcharisma * 10);

		int Outfitagility = (outfit_->getSPECIAL()) - (Outfitstrength * 100000) - (Outfitperception * 10000) - (Outfitendurance * 1000) - (Outfitcharisma * 100) - (Outfitintelligence * 10);

		int Outfitluck = (outfit_->getSPECIAL()) - (Outfitstrength * 100000) - (Outfitperception * 100000) - (Outfitendurance * 10000) - (Outfitcharisma * 1000) - (Outfitintelligence * 100) - (Outfitagility * 10);

		strength = Outfitstrength + Dwellerstrength;

		perception = Dwellerperception + Outfitperception;

		endurance = Dwellerendurance + Outfitendurance;

		charisma = Dwellercharisma + Outfitcharisma;

		intelligence = Dwellerintelligence + Outfitintelligence;

		agility = Dwelleragility + Outfitagility;

		luck = Dwellerluck + Outfitluck;

		if (strength >= 9)
		{
			strength = 9;
		}

		if (perception >= 9)
		{
			perception = 9;
		}

		if (endurance >= 9)
		{
			endurance = 9;
		}

		if (charisma >= 9)
		{
			charisma = 9;
		}

		if (intelligence >= 9)
		{
			intelligence = 9;
		}

		if (agility >= 9)
		{
			agility = 9;
		}

		if (luck >= 9)
		{
			luck = 9;
		}
		SPECIAL_ = (strength * 1000000) + (perception * 100000) + (endurance * 10000) + (charisma * 1000) + (intelligence * 100) + (agility * 10) + (luck * 1);
		
		return SPECIAL_;
	}

	if (outfit_ == 0)
	{
		return SPECIAL_;
	}
	return SPECIAL_;
}

/****************************************************************************/
/*!
\brief
return a copy of health_

\param health_ - takes in the value for the Dweller's health
\exception None
\return None
*/
/****************************************************************************/

const int Dweller::getCurrentHealth()
{
	return health_;
}

/****************************************************************************/
/*!
\brief
return a copy of radiation_

\param radiation_ - takes in the value for the Dweller's radiation
\exception None
\return None
*/
/****************************************************************************/

const int Dweller::CurrentRadDamage()
{
	return radiation_;
}

/****************************************************************************/
/*!
\brief
returns nothing

\param None
\exception None
\return None
*/
/****************************************************************************/

const int Dweller::getAttackDmg()
{
	return 0;
}

/****************************************************************************/
/*!
\brief
sets a value for position_

\param position_ - takes in the values for the Dweller's stats
\exception None
\return None
*/
/****************************************************************************/

void Dweller::setPosition(const Vec2D& position_)
{
	this->position_ = position_;
}

/****************************************************************************/
/*!
\brief
return a copy of position_

\param position_ - takes in the values for the Dweller's position
\exception None
\return None
*/
/****************************************************************************/

const Vec2D Dweller::getPosition()
{
	return position_;
}

/****************************************************************************/
/*!
\brief
sets a value for health_

\param health_ - takes in the value for the Dweller's health
\exception None
\return None
*/
/****************************************************************************/

void Dweller::receiveHealthDamage(const int& health_)
{
	if (health_ >(100 - radiation_))
	{
		this->health_ = (100 - radiation_);
	}
	this->health_ = health_;
}

/****************************************************************************/
/*!
\brief
set a value for radiation_

\param radiation_ - takes in the value for the Dweller's radiation_
\exception None
\return None
*/
/****************************************************************************/

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
	this->radiation_ = radiation_;
}

/****************************************************************************/
/*!
\brief
set a value for durability_

\param durability_ - takes in the value for the Equipment's durability_
\exception None
\return None
*/
/****************************************************************************/

void Dweller::receiveEquipmentDamage(const int& durability_)
{

}

/****************************************************************************/
/*!
\brief
sets the value for how much health_ is lost

\param health_ - takes in the value for the Dweller's health_
\exception None
\return None
*/
/****************************************************************************/

void Dweller::receiveDamage(const int& health_)
{
	this->health_ -= health_;
}

/****************************************************************************/
/*!
\brief
sets a value for stimpak_

\param stimpak_ - takes in the value for the number of stimpaks
\exception None
\return None
*/
/****************************************************************************/

void Dweller::addStimpak(const int& stimpak_)
{
	this->stimpak_ = stimpak_;
}

/****************************************************************************/
/*!
\brief
sets a value for radaway_

\param radaway_ - takes in the value for the number of radaway
\exception None
\return None
*/
/****************************************************************************/

void Dweller::addRadAway(const int& radaway_)
{
	this->radaway_ = radaway_;
}

/****************************************************************************/
/*!
\brief
uses 1 stimpak_ and adds 20 to health_

\param 
		stimpak_ - takes in the value for the number of stimpaks
		health_ - takes in the value for the Dweller's health_

\exception None
\return None
*/
/****************************************************************************/

void Dweller::useStimpak()
{
	health_ += 20;
	stimpak_ -= 1;
}

/****************************************************************************/
/*!
\brief
uses 1 radaway and reduces radiation_ by 10

\param 
		radaway_ - takes in the value for the number of radaway
		radiation_ - takes in the value for the Dweller's radiation_

\exception None
\return None
*/
/****************************************************************************/

void Dweller::useRadAway()
{
	radiation_ -= 10;
	radaway_ -= 1;
}

/****************************************************************************/
/*!
\brief
return a copy of outfit_

\param outfit_ - takes in the value for outfit
\exception None
\return None
*/
/****************************************************************************/

Outfit* Dweller::assignOutfit(Outfit* outfit_)
{
	return outfit_;
}

/****************************************************************************/
/*!
\brief
return a copy of weapon_

\param weapon_ - takes in the values for the Dweller's stats
\exception None
\return None
*/
/****************************************************************************/

Weapon* Dweller::assignWeapon(Weapon* weapon_)
{
	return weapon_;
}

/****************************************************************************/
/*!
\brief
return a copy of isDead

\param isDead - a bool variable that determines if the Dweller is dead or alive
\exception None
\return None
*/
/****************************************************************************/

bool Dweller::isDead()
{
	bool isDead;
	if (health_ < 1)
	{
		isDead = true;
	}
	if (health_ > 1)
	{
		isDead = false;
	}

	return 0;
}