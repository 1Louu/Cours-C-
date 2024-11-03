#ifndef WORLD_H__
#define WORLD_H__

#include <vector>
#include "Player.h"

class Food;  

class World {
protected:
	std::vector <Entity*> VisualEntityList;
	int score;
	Player* bob;
	Food* Apple; 
public:
	World();
	void draw(sf::RenderWindow&); 
	void movement(sf::Keyboard::Scancode _event);
	void FoodConsumed();
	void nomovement();
	void process();
};

#endif