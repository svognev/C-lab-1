int getRecommendation(char gender, float height, float weight)
{
	float ex_weight;
	int ret;
		
	if (gender == 'm')
		ex_weight = height - 100;
	else 
		ex_weight = height - 110;

	if (ex_weight == weight)
		ret=0;
	else if (ex_weight < weight)
		ret=1;
	else if (ex_weight > weight)
		ret=-1;
	
    return ret;
}