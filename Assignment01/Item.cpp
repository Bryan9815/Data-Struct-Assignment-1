/****************************************************************************/
/*!

*/
/****************************************************************************/

#include "Item.h"

Item::Item(const string& kName, const int& durability_) : GameObject(kName), durability_(durability_)
{

}

Item::~Item()
{

}

void Item::receiveDamage(const int& durability_)
{
	cout << "i->receiveDamage tested successfully: " << durability_ << endl;
	this->durability_ = durability_;
}

const int Item::getDurability()
{
	if (durability_ < 1)
	{
		cout << "Item is destroyed" << endl;

		return 0;
	}
	cout << "i->getDurability tested successfully" << endl;
	return durability_;
}