#ifndef FOOD_H__
#define FOOD_H__

#include <SFML/Graphics.hpp>
#include "Entity.h" 
#include "World.h"

class Food : public Entity {
protected:
	World* parent;
public:
	Food(float _x, float _y ,World* _parent);
	virtual void consumed();
};

#endif