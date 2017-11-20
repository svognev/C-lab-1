char* greet(int hour, int min)
{
	if (hour <0 || hour >24)
		return "Uncorrect time!";
	if (min <0 || min > 60)
		return "Uncorrect time!";
	if (hour * 60 + min <= 360 && hour * 60 + min >= 0)
		return "Good night!";
	if (hour * 60 + min <= 660 && hour * 60 + min > 360)
		return "Good morning!";
	if (hour * 60 + min <= 1080 && hour * 60 + min > 660)
		return "Good day";
	if (hour * 60 + min <= 1440 && hour * 60 + min > 1080)
		return "Good evening!";
	
}