#include <stdio.h>

char* greet(int hour, int min){
	int long_min;
	long_min = hour * 60 + min;
	if (0 <= long_min && long_min < 360){
		return "Good night!";
	}else if (360 <= long_min && long_min < 660){
		return "Good morning!";
	}else if (660 <= long_min  && long_min < 1080){
		return "Good day!";
	}else if (1080 <= long_min && long_min < 1440){
		return "Good evening!";
	}else{
		return "Uncorrect time!";
	}
}
