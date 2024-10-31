#include "Entity.h"

Entity::Entity(float _x, float _y)
	: vectpos(_x, _y), visual(nullptr) // appelle directement le constructeur de vector2 car on ne peut pas changer vectpos dans la fonction. 
{
	// Donc pas besoin de faire plus pour le constructeur de Entity
}


void Entity::setpos(Vector2 Pos) {
	this->vectpos = Pos;
}

Vector2 Entity::getpos() {
	return (vectpos);
}

sf::Shape* Entity::getVisual() {
	return(visual);
}