#include <string.h>
#include "task1.h"

float calcIdealWeight(char gender, float height)
{
	if (strcmp(&gender, "male"))
		return (height - 100);
	if (strcmp(&gender, "female"))
		return (height - 110);
	else return 2;
}

int getRecommendation(char gender, float height, float weight)
{
	float idealWeight = calcIdealWeight(gender, height);

	if (weight < idealWeight)
		return -1;
	if (weight > idealWeight)
		return 1;
	if (weight == idealWeight)
		return 0;
	else
		return 2; //Data error
}