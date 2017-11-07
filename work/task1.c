int getRecommendation(char gender, float height, float weight)
{
	float ideal = 0;
	if (gender == 'm')
	{
		ideal = height - 100;
		if (weight < ideal)
			return -1;
		else if (weight == ideal)
			return 0;
		else
			return 1;
	}
	else
	{
		ideal = height - 110;
		if (weight < ideal)
			return -1;
		else if (weight == ideal)
			return 0;
		else
			return 1;
	}
	
}