float convert(int feet, int inches){
	float sant;
	inches = (feet * 12) + inches;
	sant = inches * 2.54;
	return sant;
}
