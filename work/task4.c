float convert(int feet, int inches)
{
	float i = (float)inches / 100;
	float rez = (feet + i)*12;
	return rez;
}