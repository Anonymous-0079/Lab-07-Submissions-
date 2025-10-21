#include <stdio.h>
int main (){
	int i, cars[10], fee, o_count = 0, rate = 0, totalRev = 0;
	
	printf("Enter the hours each car: \n ");
	for (i = 0; i<10; i++){
		scanf("%d", &cars[i]);
	}
	
	for(i = 0; i<10; i++){
		if (cars[i] <= 2)
			rate = 50;
		else if(cars[i] >= 3 && cars[i] <= 5)
		 	rate = 40;
		else 
			rate = 30;
			
		fee = cars[i] * rate; 
		totalRev += fee;
		
		if (cars[i] > 8){
			printf("Overstay Warning!!!");
			o_count += 1;
		} 
		
	}
	printf("Total revneue is Rs: %d\n", totalRev);
	printf("Number of overstaying cars: %d\n", o_count);
	
	return 0;
}
