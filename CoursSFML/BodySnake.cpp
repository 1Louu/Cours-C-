#include "BodySnake.h"

BodySnake::BodySnake(float _x, float _y) : Entity(_x, _y) {
	visual = new sf::RectangleShape(sf::Vector2f(32.f, 32.f));
	visual->setFillColor(sf::Color(50, 141, 28));
	visual->setPosition(_x * 32, _y * 32);
}

void BodySnake::visualsprite()
{
}
