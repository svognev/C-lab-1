
int getRecomendation(char gender, float height, float weight)
{
	float Normal;

	if (gender == 'M')
		Normal = height - 100;
	else Normal = height - 110;
	if (Normal == weight)
		return 0;
	else if (Normal > weight)
		return -1;
	else if (Normal < weight)
		return 1;
}