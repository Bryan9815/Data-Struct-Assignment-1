/****************************************************************************/
/*!

*/
/****************************************************************************/

#include "Outfit.h"

Outfit::Outfit() : kSPECIAL(kSPECIAL)
{
	
}

Outfit::Outfit(const string& kName, const int& durability_, const int& kSPECIAL) : kSPECIAL(kSPECIAL)
{
	
}

Outfit::~Outfit()
{
	
}

void Outfit::receiveDamage(const int& durability_)
{
	this->durability_ = durability_;
}

const int Outfit::getSPECIAL()
{
	int Luck = 0;
	int Strength = 0;
	int Perception = 0;
	int Endurance = 0;
	int Charisma = 0;
	int Intelligence = 0;
	int Agility = 0;

	if (Luck < 0)
	{
		Luck = 0;
	}
	if (Luck > 9)
	{
		Luck = 9;
	}

	if (Strength < 0)
	{
		Strength = 0;
	}
	if (Strength > 9)
	{
		Strength = 9;
	}

	if (Perception < 0)
	{
		Perception = 0;
	}
	if (Perception > 9)
	{
		Perception = 9;
	}

	if (Endurance < 0)
	{
		Endurance = 0;
	}
	if (Endurance > 9)
	{
		Endurance = 9;
	}

	if (Charisma < 0)
	{
		Charisma = 0;
	}
	if (Charisma > 9)
	{
		Charisma = 9;
	}

	if (Intelligence < 0)
	{
		Intelligence = 0;
	}
	if (Intelligence > 9)
	{
		Intelligence = 9;
	}

	if (Agility < 0)
	{
		Agility = 0;
	}
	if (Agility > 9)
	{
		Agility = 9;
	}

	return kSPECIAL;
}