#include "GameObject.h"

GameObject::GameObject()
{
	++count;
}

GameObject::GameObject(const string& kName)
{

}

GameObject::~GameObject()
{
	--count;
}

string GameObject::getName(void)
{
	return kName;
}

int GameObject::getCount()
{
	return 0;
}

int GameObject::count = 0;