#include <iostream>
#include "Player.h"

Player::Player(float _x, float _y, Vector2 _direction)
	: Entity(_x, _y), direction(_direction)
{
	BodySnake* BS1 = new BodySnake(_x, _y);
	BodySnake* BS2 = new BodySnake(_x - 1, _y);
	BodySnake* BS3 = new BodySnake(_x - 2, _y);
	BodyList.push_back(BS1);
	BodyList.push_back(BS2);
	BodyList.push_back(BS3);

}

void Player::move()
{
	if (direction.getposX() && direction.getposY()) {
		std::cout << "error" << std::endl; 
	}
	else {

	}
}

void Player::Eat(Food* _target)
{
}

std::vector<BodySnake*> Player::getBody()
{
	return (BodyList); 
}

void Player::setDirection(Vector2 _direction)
{
	this->direction = (_direction);
}


