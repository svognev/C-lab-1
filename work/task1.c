#include "task1.h"

int getRecommendation(char gender, float height, float weight)
{
	//Èäåàëüíûé_âåñ=Ðîñò-100 - äëÿ ìóæ÷èí è Èäåàëüíûé_âåñ=Ðîñò-110 - äëÿ æåíùèí.
	float ideal = 0, rez = 0;
	if (gender == 'm')
		ideal = height - 100;
	else if (gender == 'w')
		ideal = height - 110;
	rez = weight - ideal;
	if (rez > 0)
		return 1;
	else if (rez < 0)
		return -1;
	else return 0;
}
