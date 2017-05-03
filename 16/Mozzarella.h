#pragma once
#include "PizzaDecorator.h"
#include <iostream>

class MozarellaPizza : public PizzaDecorator {

public:
	MozarellaPizza(Pizza* base){
		PizzaDecorator::base = base;
	}

	int getWeight(){
		return PizzaDecorator::getWeight() + 100;
	}
	
	int getCost(){
		return PizzaDecorator::getCost() + 10;
	}
};