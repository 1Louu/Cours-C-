#ifndef IEAT_H__
#define IEAT_H__
#include "Food.h"

class IEat {
public:
	virtual void Eat(Food* _target) = 0;
};

#endif
