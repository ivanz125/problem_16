#pragma once
#include "Pizza.h"

class PizzaDecorator : public Pizza {

protected:
	Pizza* base;
	PizzaDecorator(){}

public:

	PizzaDecorator(Pizza* pizza){
		base = pizza;
	}

	int getWeight(){
		return base->getWeight();
	}

	int getCost(){
		return base->getCost();
	}
};