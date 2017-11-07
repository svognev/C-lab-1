int getRecommendation(char gender, float height, float weight)
{
	float idealWeight = 0.0f;
	if (gender == 'm')
		idealWeight = height - 100.0f;
	else if (gender == 'w')
		idealWeight = height - 110.0f;

	if (weight > idealWeight)
		return 1;
	else if (weight < idealWeight)
		return -1;
	else
		return 0;
}