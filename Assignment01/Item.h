/****************************************************************************/
/*!
\file Item.h
\author Teh Kai Hong Bryan
\par	email: 150587A@mymail.nyp.edu.sg
\brief
Header file containing Item Class
*/
/****************************************************************************/

#ifndef ITEM_H
#define ITEM_H

#include "GameObject.h"

/****************************************************************************/
/*!
			Class Item:
\brief	A Class derived from GameObject that contains functions and variables
*/
/****************************************************************************/

class Item : virtual public GameObject
{
public:
	Item(const string&, const int&);
	virtual ~Item();

	virtual void receiveDamage(const int& ) = 0;
	const int getDurability();
private:

protected:
	int durability_;
};

#endif //ITEM_H