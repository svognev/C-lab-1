int getRecommendation(char gender, float height, float weight)
{
	float normalweight = 0;

	if (gender == 'm')
		normalweight = height - 100;
	else if (gender == 'w')
		normalweight = height - 110;
	else
		return 2;

	if (normalweight > weight)
		return -1;
	else if (normalweight < weight)
		return 1;
	else
		return 0;
}