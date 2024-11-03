#include <iostream>
#include <vector>
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
	if (direction.getposX()==0 && direction.getposY()==0 ) {
	}
	else {
		for (int i = BodyList.size()-1 ; i !=0; i--) {
			if (BodySnake* BodyTemp = dynamic_cast<BodySnake*> (BodyList[i])) {
				if(i!=1){

					BodySnake* BodyTemp2 = dynamic_cast<BodySnake*> (BodyList[i - 1]);

					BodyTemp->setpos(BodyTemp2->getpos());

					std::cout << BodyTemp->getpos().getposX() << "," << BodyTemp->getpos().getposY() << std::endl;
				}
				else {


					std::cout << direction.getposX() << "," << direction.getposY() << std::endl;
					BodyTemp->setpos(Vector2(BodyTemp->getpos().getposX() + direction.getposX(), BodyTemp->getpos().getposY() + direction.getposY()));
					BodyTemp->visualsprite(BodyTemp->getpos().getposX() + direction.getposX(), BodyTemp->getpos().getposY() + direction.getposY());
					std::cout << "WORKING WORKING" << std::endl;
					std::cout << BodyTemp->getpos().getposX() << "," << BodyTemp->getpos().getposY() << std::endl;
				}
			}
			else {
				std::cout << "Error" << std::endl; 
			}
		}
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


