#include <iostream>
#include <vector>
#include <string>
#include "Vector2.h"

Vector2::Vector2(float _posX, float _posY) // constructeur
	: posX(_posX), posY(_posY) // Rajouter : pos[..] est strictement la même que le contenu de la fonction. 
{
}

void Vector2::setposX(float Pos) {
	this->posX = Pos;
}

void Vector2::setposY(float Pos) {
	this->posY = Pos;
}

float Vector2::getposX() {
	return(this->posX);
}

float Vector2::getposY() {
	return(this->posY);
}

Vector2 Vector2::normalize() {
	Vector2 t(posX, posY);
	float d = std::sqrt(std::pow(this->posX, 2) + std::pow(this->posY, 2));

	float x = posX / d;
	float y = posY / d; // 

	return Vector2(x, y);
}// Petit com:  sqrt = square root et pow = puissance 
