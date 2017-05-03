#pragma once
#include "PizzaDecorator.h"

class TomatoPizza : public PizzaDecorator {

public:
	TomatoPizza(Pizza* base){
		PizzaDecorator::base = base;
	}

	int getWeight(){
		return PizzaDecorator::getWeight() + 80;
	}

	int getCost(){
		return PizzaDecorator::getCost() + 6;
	}
};