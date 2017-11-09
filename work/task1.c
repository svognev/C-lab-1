//Анализ ситуации с весом
int getRecommendation(char gender, float height, float weight)
{
	//Анализ веса для мужчин Male
	if ((gender == 'm') || (gender == 'M')) {
		if (height < (height - 100))
			return -1;	//Вес недостаточен
		else if (height > (height - 100))
			return 1;	//Вес избыточен
		else
			return 0;	//Вес идеален
	}
	//Анализ веса для женщин Female
	else if ((gender == 'W') || (gender == 'w')) {
		if (height < (height - 110))
			return -1;	//Вес недостаточен
		else if (height > (height - 110))
			return 1;	//Вес избыточен
		else
			return 0;	//Вес идеален
	}
	
	else {
		return 10;
	}
}
