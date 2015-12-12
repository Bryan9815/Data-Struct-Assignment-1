/****************************************************************************/
/*!
\file GameObject.h
\author Teh Kai Hong Bryan
\par	email: 150587A@mymail.nyp.edu.sg
\brief 
Header file containing GameObject Class
*/
/****************************************************************************/

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

/****************************************************************************/
/*!
			Class GameObject:
\brief	A Class that contains functions and variables
*/
/****************************************************************************/

class GameObject
{
public:
	GameObject();
	~GameObject();

	string getName(void);
	static int getCount();
private:
	const string kName;
	static int count_;
protected:
	GameObject(const string&);
};

#endif //GAMEOBJECT_H