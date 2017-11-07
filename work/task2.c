char* greet(int hour, int min)
{
	if ((hour < 0 || hour > 23) || (min < 0 || min > 59))
		return "Uncorrect time!";

	if (hour < 6)
		return "Good night!";
	else if (hour < 11)
		return "Good morning!";
	else if (hour < 18)
		return "Good day!";
	else
		return "Good evening!";
}