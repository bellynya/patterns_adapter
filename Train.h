#pragma once
#include <iostream>

class Train
{
public:
	const int WAGGON_LENGTH = 10;
	std::string type_;
	std::string color_;
	int quantity_of_waggon_;

	Train(std::string color, int quantity_of_waggon) : color_(color), quantity_of_waggon_(quantity_of_waggon), type_("Train") {}
	Train() : color_(""), quantity_of_waggon_(NULL), type_("Car") {}
	virtual void ProofYourType();

};

