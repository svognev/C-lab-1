int a;
int getRecommendation(char gender, float height, float weight)
{
	if ((gender == 'm') && (height - weight == 100))
		return 0;	

	if ((gender == 'w') && (height - weight == 110))
		return 0;

	if ((gender == 'm') && (height - weight < 100))
		return 1;

	if ((gender == 'w') && (height - weight < 110))
		return 1;

	if ((gender == 'm') && (height - weight > 100))
		return -1;

	if ((gender == 'w') && (height - weight > 110))
		return -1;
}