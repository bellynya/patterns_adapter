#include "Adapter.h"

Train* Adapter::CarToTrainAdapter(Car *car)
{
	int waggon_count = car->length_ / 10;
	Train* result = new Train(car->color_, waggon_count);

	return result;
}

Car* Adapter::TrainToCarAdapter(Train *train)
{
	Car* result = new Car(train->color_, train->quantity_of_waggon_ * WAGGON_LENGTH);
	return result;
}
