int getRecomendation(char gender, float height, float weight){
	float perfect_weight;
	if (gender == 'm'){
		perfect_weight = height - 100;
	}else{
		perfect_weight = height - 110;
	}
	
	if (perfect_weight > weight){
		return -1;
	}else if (perfect_weight < weight){
		return 1;
	}else{
		return 0;
	}
}
