/****************************************************************************/
/*!

*/
/****************************************************************************/

#include "Outfit.h"

Outfit::Outfit(const string& kName, const int& durability_, const int& kSPECIAL) : GameObject(kName), Item(kName, durability_), kSPECIAL(kSPECIAL)
{
	cout << "Outfit: kName: " << kName << ", durabilty_: " << durability_ << ", kSPECIAL: " << kSPECIAL << endl;
}

Outfit::~Outfit()
{
	
}

void Outfit::receiveDamage(const int& durability_)
{
	cout << "o->receiveDamage tested successfully: " << durability_ << endl;
	this->durability_ = durability_;
}

const int Outfit::getSPECIAL()
{
	cout << "o->getSPECIAL tested successfully" << endl;
	return kSPECIAL;
}