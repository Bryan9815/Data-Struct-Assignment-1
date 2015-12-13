/****************************************************************************/
/*!
\file GameObject.cpp
\author Teh Kai Hong Bryan
\par	email: 150587A@mymail.nyp.edu.sg
\brief
Constructor, Destructor and Functions for the GameObject
*/
/****************************************************************************/

#include "Outfit.h"

/****************************************************************************/
/*!
\brief
Constructor

\param
		kName - string that takes in the name of the Dweller
		durability_ - takes in the value for the Outfit's durability_
		kSPECIAL - takes in the value for the Outfit's stats

\exception None
\return None
*/
/****************************************************************************/

Outfit::Outfit(const string& kName, const int& durability_, const int& kSPECIAL) : GameObject(kName), Item(kName, durability_), kSPECIAL(kSPECIAL)
{

}

/****************************************************************************/
/*!
\brief
Destructor

\param
\exception None
\return None
*/
/****************************************************************************/

Outfit::~Outfit()
{
	
}

/****************************************************************************/
/*!
\brief
sets a value for durability_ lost by Outfit

\param
kName - string that takes in the name of the Dweller
count_ - an integer that counts the number of constructors run

\exception None
\return None
*/
/****************************************************************************/

void Outfit::receiveDamage(const int& durability_)
{
	this->durability_ -= durability_;
}

/****************************************************************************/
/*!
\brief
returns a copy of kSPECIAL

\param
		kSPECIAL - takes in the value for the Outfit's stats
\exception None
\return None
*/
/****************************************************************************/

const int Outfit::getSPECIAL()
{
	return kSPECIAL;
}