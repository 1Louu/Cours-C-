#include <iostream>
#include <vector>
#include "World.h"
#include "Food.h"

World::World(): score(0) {
	bob = new Player(4.f, 5.f, Vector2(0,0));
	Apple = new Food(9.f, 12.f, this);

	VisualEntityList.push_back(bob);
	VisualEntityList.push_back(Apple);
}

void World::draw(sf::RenderWindow& _window) {
	for (int i = 0; i < VisualEntityList.size(); i++) {
		if (Entity* EntTemp = dynamic_cast<Entity*> (VisualEntityList[i])) {
			if (EntTemp->getVisual()){
				_window.draw(*EntTemp->getVisual());
			};
			if (EntTemp ==  dynamic_cast<Player*> (VisualEntityList[i])){
				std::vector <BodySnake*> Bodytemp = dynamic_cast<Player*> (VisualEntityList[i])->getBody();
				for (int j = 0; j < Bodytemp.size(); j++) {
					if (Bodytemp[j]->getVisual()) {
						_window.draw(*Bodytemp[j]->getVisual());
					};
				}
			}
		};
	}
}

void World::movement(sf::Keyboard::Scancode _event)
{
	switch (_event) {
	case sf::Keyboard::Scan::Left:
		std::cout << "left" << std::endl;
		bob->setDirection(Vector2(-1, 0)); 
		break;
	case sf::Keyboard::Scan::Right:
		std::cout << "right" << std::endl;
		bob->setDirection(Vector2(1, 0));
		break;
	case sf::Keyboard::Scan::Up:
		std::cout << "up" << std::endl;
		bob->setDirection(Vector2(0, -1));
		break;
	case sf::Keyboard::Scan::Down:
		std::cout << "down" << std::endl;
		bob->setDirection(Vector2(0, 1));
		break;
	}
}

void World::FoodConsumed()
{
	score++;

}

void World::nomovement()
{
	
}

void World::process()
{
	bob->move(); 
}
