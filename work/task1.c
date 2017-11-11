int getRecommendation(char gender, float height, float weight)
{
	if (gender == 'm' || gender == 'M')
	{
		if (weight == height - 100)
			return 0;
		if (weight > height - 100)
			return 1;
		if (weight < height - 100)
			return -1;
	}
	else if (gender == 'w' || gender == 'W')
	{
		if (weight == height - 110)
			return 0;
		if (weight > height - 110)
			return 1;
		if (weight < height - 110)
			return -1;
	}
		return 2;
} 