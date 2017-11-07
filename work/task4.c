float convert(int feet, int inches)
{
	float result = 0;
	result = (feet * 12 + inches)*2.54;
	return result;
}