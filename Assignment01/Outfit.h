/****************************************************************************/
/*!
\file Outfit.h
\author Teh Kai Hong Bryan
\par	email: 150587A@mymail.nyp.edu.sg
\brief
Header file containing Outfit Class
*/
/****************************************************************************/

#ifndef OUTFIT_H
#define OUTFIT_H

#include "Item.h"

/****************************************************************************/
/*!
			Class Outfit:
\brief	A Class derived from Item that contains functions and variables
*/
/****************************************************************************/

class Outfit : virtual public Item
{
public:
	Outfit();
	Outfit(const string&, const int&, const int&);
	~Outfit();

	virtual void receiveDamage(const int&);

	const int getSPECIAL();
private:
	const int kSPECIAL;
protected:

};
#endif //OUTFIT_H