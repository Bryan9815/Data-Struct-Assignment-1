/****************************************************************************/
/*!

*/
/****************************************************************************/

#include "Dweller.h"

/****************************************************************************/
/*!

*/
/****************************************************************************/

Dweller::Dweller(const string& kName, const int& SPECIAL_) : GameObject(kName), position_(0, 0), SPECIAL_(SPECIAL_), health_(100), radiation_(0), stimpak_(0), radaway_(0), outfit_(NULL), weapon_(NULL)
{
	cout << "Dweller: kName: " << kName << ", SPECIAL_: " << SPECIAL_ << endl;
}

Dweller::~Dweller()
{
	
}

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
		
		cout << "d->getSPECIAL tested successfully" << endl;
		return SPECIAL_;
	}

	if (outfit_ == 0)
	{
		cout << "d->getSPECIAL tested successfully" << endl;
		return SPECIAL_;
	}
	return SPECIAL_;
}

const int Dweller::getCurrentHealth()
{
	cout << "d->getCurrentHealth tested successfully: " << health_ << endl;
	return health_;
}

const int Dweller::CurrentRadDamage()
{
	cout << "d->CurrentRadDamage tested successfully: " << radiation_ << endl;
	return radiation_;
}

const int Dweller::getAttackDmg()
{
	cout << "d->getAttackDmg tested successfully" << endl;
	return 0;
}

void Dweller::setPosition(const Vec2D& position_)
{
	cout << "d->setPosition tested successfully" << endl;
	this->position_ = position_;
}

const Vec2D Dweller::getPosition()
{
	cout << "d->getPosition tested successfully" << endl;
	return position_;
}

void Dweller::receiveHealthDamage(const int& health_)
{
	if (health_ >(100 - radiation_))
	{
		this->health_ = (100 - radiation_);
	}
	cout << "d->receiveHealthDamage tested successfully: " << health_ << endl;
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
	cout << "d->receiveRadDamage tested successfully: " << radiation_ << endl;
	this->radiation_ = radiation_;
}

void Dweller::receiveEquipmentDamage(const int& durability_)
{
	cout << "d->receiveEquipmentDamage tested successfully: " << durability_ << endl;
}

void Dweller::receiveDamage(const int& health_)
{
	this->health_ = health_;
}

void Dweller::addStimpak(const int& stimpak_)
{
	cout << "d->addStimpak tested successfully: " << stimpak_ << endl;
	this->stimpak_ = stimpak_;
}

void Dweller::addRadAway(const int& radaway_)
{
	cout << "d->addRadAway tested successfully: " << radaway_ << endl;
	this->radaway_ = radaway_;
}

void Dweller::useStimpak()
{
	cout << "d->useStimpak tested successfully" << endl;
	health_ += 20;
}

void Dweller::useRadAway()
{
	cout << "d->useRadAway tested successfully" << endl;
	radiation_ -= 10;
}

Outfit* Dweller::assignOutfit(Outfit* outfit_)
{
	cout << "d->assignOufit tested successfully: " << outfit_ << endl;
	return outfit_;
}

Weapon* Dweller::assignWeapon(Weapon* weapon_)
{
	cout << "d->assignWeapon tested successfully: " << weapon_ << endl;
	return weapon_;
}

bool Dweller::isDead()
{
	cout << "d->isDead tested successfully" << endl;
	bool isDead;
	if (health_ < 1)
	{
		isDead = true;
		cout << "Dweller is dead" << endl;
	}
	if (health_ > 1)
	{
		isDead = false;
	}

	return 0;
}