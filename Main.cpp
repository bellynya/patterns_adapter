#include <iostream>
#include "Car.h"
#include "Train.h"
#include "Adapter.h"

int main()
{
	Car* car = new Car("red", 20);
	Car* car_result;
	Train* train = new Train("grey", 100);
	Train* train_result;
	Adapter* adapt = new Adapter();

	train_result = adapt->CarToTrainAdapter(car);
	car_result = adapt->TrainToCarAdapter(train);

	train_result->ProofYourType();
	car_result->ProofYourType();
	return 0;

}