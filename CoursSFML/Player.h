#ifndef PLAYER_H__
#define PLAYER_H__

#include <vector>
#include "IEat.h" 
#include "BodySnake.h"

class Player : public Entity, public IEat { // doc il a un visuel ?
protected:
	std::vector <BodySnake*> BodyList; // si 1 seul body pourquoi un vector de body ? donc tu as plusieur body ? donc plusieur visuel
	Vector2 direction; 
public:
	Player(float _x, float _y, Vector2 _direction);
	virtual void move();
	virtual void Eat(Food* _target) override;
	virtual std::vector <BodySnake*> getBody();
	virtual void setDirection(Vector2 _direction); 
};

#endif