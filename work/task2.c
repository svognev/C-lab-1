char * greet(int hour, int min, int sec)
{
	if (hour < 0 || hour > 23 || min < 0 || min > 59 || sec < 0 || sec > 59)
		return "Uncorrect time!";

	if (hour >= 0 && hour < 6)
		return "Good night!";

	if (hour >= 6 && hour < 12)
		return "Good morning!";

	if (hour >= 12 && hour < 18)
		return "Good day!";

	if (hour >= 18 && hour <= 23)
		return "Good evening!";
}