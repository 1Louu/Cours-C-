#ifndef VECTO2_H__
#define VECTO2_H__

class Vector2 {
private:
	float posX;
	float posY;
public:
	Vector2(float _posX, float _posY);
	void setposX(float _posX);
	void setposY(float _posX);
	float getposX();
	float getposY();
	Vector2 normalize();
};

#endif