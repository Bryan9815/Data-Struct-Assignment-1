#ifndef OUTFIT_H
#define OUTFIT_H

#include "Item.h"

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