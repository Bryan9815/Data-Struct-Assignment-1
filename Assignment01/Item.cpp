#include "Item.h"

Item::Item()
{

}

Item::Item(const string& kName, const int& durability)
{

}

void Item::receiveDamage(const int& durability)
{
	this->durability = durability;
}

const int Item::getDurability()
{
	return durability;
}