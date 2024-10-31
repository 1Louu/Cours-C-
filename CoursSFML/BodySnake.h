#ifndef BODYSNAKE_H__
#define BODYSNAKE_H__

#include "Entity.h"

class BodySnake : public Entity { // donc il a un visuel
public:
	BodySnake(float _x, float _y);
	void visualsprite();
};

#endif