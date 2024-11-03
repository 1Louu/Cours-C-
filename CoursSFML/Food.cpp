#include "Food.h"

Food::Food(float _x, float _y, World* _parent)
	: Entity(_x, _y)
{
	visual = new sf::CircleShape(8.f, 6);
	visual->setFillColor(sf::Color(220, 20, 60));
	visual->setPosition(_x * 32, _y * 32);
}

void Food::consumed()
{
}
