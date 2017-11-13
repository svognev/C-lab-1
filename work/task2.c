char* greet(int hour, int min)
{
	
	hour = (hour * 60) + min;
	if (0 < hour && hour <= 360)
		return "Good night!";

	 if (360 < hour && hour <= 660)
		return "Good morning!";
	 if (660 < hour && hour<= 1080)
		return ("Good day!");
	 if (1080 < hour && hour <= 1440)
		 return "Good evening!";
	 else
		 return " Uncorrect time!";
}