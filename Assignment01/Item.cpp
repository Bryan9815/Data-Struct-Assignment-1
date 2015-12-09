#include "Item.h"

Item::Item()
{

}

Item::Item(const string& kName, const int& durability_)
{

}

Item::~Item()
{

}

void Item::receiveDamage(const int& durability_)
{
	if (durability_ < 1)
	{
		cout << "Item is destroyed" << endl;
	}
	this->durability_ = durability_;
}

const int Item::getDurability()
{
	return durability_;
}