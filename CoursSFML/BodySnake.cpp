#include "BodySnake.h"

BodySnake::BodySnake(float _x, float _y) : Entity(_x, _y) {
	visual = new sf::RectangleShape(sf::Vector2f(16.f, 16.f));
	visual->setFillColor(sf::Color(50, 141, 28));
	visual->setPosition(_x * 16, _y * 16);
}

void BodySnake::visualsprite(float _x, float _y)
{
	visual->setPosition(_x * 16, _y * 16);
}
