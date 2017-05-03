#include "stdafx.h"
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <iostream>
#include "PlainPizza.h"
#include "Mozzarella.h"
#include "TomatoSauce.h"
using namespace std;

int main(int argc, char* argv[])
{
	Catch::Session().run(argc, argv);
	system("pause");
	return 0;
}

TEST_CASE("Base pizza"){
	PlainPizza* pizza = new PlainPizza();
	CHECK(pizza->getWeight() == 500);
	CHECK(pizza->getCost() == 40);
}

TEST_CASE("Mozzarella pizza"){
	MozarellaPizza* pizza = new MozarellaPizza(new PlainPizza());
	CHECK(pizza->getWeight() == 600);
	CHECK(pizza->getCost() == 50);
}

TEST_CASE("Tomato pizza"){
	TomatoPizza* pizza = new TomatoPizza(new PlainPizza());
	CHECK(pizza->getWeight() == 580);
	CHECK(pizza->getCost() == 46);
}

TEST_CASE("Tomato and mozzarella pizza"){
	Pizza* firstPizza = new TomatoPizza(new MozarellaPizza(new PlainPizza()));
	CHECK(firstPizza->getWeight() == 680);
	CHECK(firstPizza->getCost() == 56);
	Pizza* secondPizza = new MozarellaPizza(new TomatoPizza(new PlainPizza()));
	CHECK(secondPizza->getWeight() == 680);
	CHECK(secondPizza->getCost() == 56);
}