/****************************************************************************/
/*!
\file Vec2D.h
\author Teh Kai Hong Bryan
\par	email: 150587A@mymail.nyp.edu.sg
\brief
Struct to define a position
*/
/****************************************************************************/

#ifndef VEC2D_H
#define VEC2D_H

#include "GameObject.h"

struct Vec2D
{
public:
	Vec2D();
	Vec2D(double, double);
	~Vec2D();

	double x;
	double y;
};

#endif //VEC2D_H