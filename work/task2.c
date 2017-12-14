char * greet(int hour, int min)
{
	if ((hour < 24) && (hour >= 0) && (min >= 0) && (min < 60))
	{
		if (hour < 6)
			return "Good night!";
		else if ((hour >= 6) && (hour < 11))
			return "Good morning!";
		else if ((hour >= 11) && (hour < 18))
			return "Good day!";
		else if (hour >= 18)
			return "Good evening!";
	}
	else return "Uncorrect time!";

}