/****************************************************************************/
/*!
\file GameObject.cpp
\author Teh Kai Hong Bryan
\par	email: 150587A@mymail.nyp.edu.sg
\brief
Constructor, Destructor and Functions for the GameObject
*/
/****************************************************************************/

#include "Item.h"

/****************************************************************************/
/*!
\brief
Constructor

\param
		kName - string that takes in the name of the Dweller
		count_ - an integer that counts the number of constructors run

\exception None
\return None
*/
/****************************************************************************/

Item::Item(const string& kName, const int& durability_) : GameObject(kName), durability_(durability_)
{

}

/****************************************************************************/
/*!
\brief
Constructor

\param
		kName - string that takes in the name of the Dweller
		count_ - an integer that counts the number of constructors run

\exception None
\return None
*/
/****************************************************************************/

Item::~Item()
{

}

/****************************************************************************/
/*!
\brief
Constructor

\param
		kName - string that takes in the name of the Dweller
		count_ - an integer that counts the number of constructors run

\exception None
\return None
*/
/****************************************************************************/

void Item::receiveDamage(const int& durability_)
{
	this->durability_ = durability_;
}

/****************************************************************************/
/*!
\brief
Constructor

\param
		kName - string that takes in the name of the Dweller
		count_ - an integer that counts the number of constructors run

\exception None
\return None
*/
/****************************************************************************/

const int Item::getDurability()
{
	if (durability_ < 1)
	{
		return NULL;
	}
	return durability_;
}