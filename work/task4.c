float convert(int feet, int inches)
{
	float santimetr = 0.0;
	santimetr = (((feet * 12) + inches)*2.54);
	return santimetr;
}