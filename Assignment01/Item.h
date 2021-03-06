#ifndef ITEM_H
#define ITEM_H

#include "GameObject.h"

class Item : virtual public GameObject
{
public:
	Item();
	Item(const string&, const int&);
	~Item();

	virtual void receiveDamage(const int& ) = 0;
	const int getDurability();
private:

protected:
	int durability_;
};

#endif //ITEM_H