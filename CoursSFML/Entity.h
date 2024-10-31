#ifndef ENTITY_H__
#define ENTITY_H__

#include <SFML/Graphics.hpp>
#include "vector2.h" //Reprends les fonction de Vector2

class Entity {
protected:
	Vector2 vectpos; // Créer un objet vector2
	// pourquoi pas ici ?
	sf::Shape* visual; // = new sf::CircleShape ou new sf::RectangleShape
public:
	Entity(float x, float y); // Constructeur
	virtual void setpos(Vector2 _vectpos);
	virtual Vector2 getpos();
	virtual sf::Shape* getVisual(); 
};

#endif