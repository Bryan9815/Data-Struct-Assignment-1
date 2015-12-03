#ifndef OUTFIT_H
#define OUTFIT_H

#include "Item.h"

class Outfit : public Item
{
public:
	Outfit();
	Outfit(const string&, const int&, const int &);
	~Outfit();

	const in getSPECIAL();
private:
	const int kSPECIAL;
protected:

};
#endif //OUTFIT_H