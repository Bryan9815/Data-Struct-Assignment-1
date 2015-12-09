#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class GameObject
{
public:
	GameObject();
	~GameObject();

	string getName(void);
	static int getCount();
private:
	const string kName;
	static int count;
protected:
	GameObject(const string&);
};

#endif //GAMEOBJECT_H