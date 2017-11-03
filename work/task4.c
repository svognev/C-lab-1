float convert(int feet, int inches)
{
	int inches_res;
	float sm;

	inches_res = (feet * 12) + inches;
	sm = inches_res * 2.54;

	return sm;
}