char* greet(int hour, int min)
{
	char* str;
	
	if ((hour > 24) || (hour < 0) || (min > 60) || (min < 0))
		str = "Uncorrect time!";
	else if ((hour >= 0) && (hour < 6))
		str = "Good night!";
	else if ((hour >= 6) && (hour < 11))
		str = "Good morning!";
	else if ((hour >= 11) && (hour < 18))
		str = "Good day!";
	else if ((hour >= 18) && (hour < 24))
		str = "Good evening!";

	return str;
}
