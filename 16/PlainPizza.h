#pragma once
#include "Pizza.h"

class PlainPizza : public Pizza {

	int weight;
	int cost;

public:
	PlainPizza(){
		weight = 500;
		cost = 40;
	}

	int getWeight(){
		return weight;
	}

	int getCost(){
		return cost;
	}

};