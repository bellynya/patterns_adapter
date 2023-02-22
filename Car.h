#pragma once
#include <iostream>

class Car
{
public:

	std::string type_;
	std::string color_;
	int length_;

	Car(std::string color, int length) : color_(color), length_(length), type_("Car") {}
	Car() : color_(""), length_(NULL), type_("Car") {}
	virtual void ProofYourType();
};

