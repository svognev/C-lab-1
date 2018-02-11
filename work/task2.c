char * greet(int hour, int min)

{
		if (hour <0 || hour >23 || min <0 || min >60)
			return "Uncorrect time!\n";
	
	
		else if (hour <06 && hour >=00)
			return "Good night!\n";

		else if (hour <11 && hour >=06)
			return "Good morning!\n";

		else if (hour <18 && hour >=11)
			return "Good day!\n";

		else 
			return "Good evening!\n";
}