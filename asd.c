#include <stdio.h>

int main(){
	
	float number[13];
	
	int counter = 0 ; 
	for(counter; counter<13; counter++){
		float value;
		printf("Please enter  %d. value: \n",counter + 1);
		scanf("%f",&value);	
		number[counter]=value;
		
	} 
	float temp;
		
	temp = number[4];
	number[4]= number[6];
	number[6]= temp; 	
	
	FILE * file; 
	
	file = fopen("dizi.txt","w");
	int i = 0;
	for(i; i<13; i++){
		fprintf(file,"This is  %d. float value = %f\n",(i+1),number[i]);
		printf("\n%f",number[i]);
			
	}
	
	fclose(file);

return 0 ;	
}
