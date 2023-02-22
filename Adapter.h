#pragma once
#include "Car.h"
#include "Train.h"

class Adapter : public Car, public Train
{
public:
	Train* CarToTrainAdapter(Car *car);
	Car* TrainToCarAdapter(Train *train);
};

