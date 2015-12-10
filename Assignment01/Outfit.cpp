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

const int Outfit::getSPECIAL()
{
	int Luck = 0;
	int Strength = 0;
	int Perception = 0;
	int Endurance = 0;
	int Charisma = 0;
	int Intelligence = 0;
	int Agility = 0;
	return kSPECIAL;
}