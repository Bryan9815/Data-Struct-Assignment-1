/****************************************************************************/
/*!
\file GameObject.cpp
\author Teh Kai Hong Bryan
\par	email: 150587A@mymail.nyp.edu.sg
\brief
Constructor, Destructor and Functions for the GameObject
*/
/****************************************************************************/

#include "GameObject.h"

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

GameObject::GameObject(const string& kName) : kName(kName)
{
	++count_;
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

GameObject::~GameObject()
{
	--count_;
}

/****************************************************************************/
/*!
\brief
returns a copy of kName

\param
		kName - string that takes in the name of the object

\exception None
\return None
*/
/****************************************************************************/

string GameObject::getName(void)
{
	return kName;
}

/****************************************************************************/
/*!
\brief
returns a copy of count_

\param
		count_ - an integer that counts the number of constructors run

\exception None
\return None
*/
/****************************************************************************/

int GameObject::getCount()
{
	return count_;
}

/****************************************************************************/
/*!
\brief
count_ variable

\param
		count_ - an integer that counts the number of constructors run

\exception None
\return None
*/
/****************************************************************************/

int GameObject::count_ = 0;