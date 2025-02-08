#include <stdio.h>

float getInput(int x){
	float num;
	
	printf("Enter num%d: ",x);
	scanf("%f",&num);
	
	return num;
}

float Multiply(float num1, float num2){
	return num1 * num2;
}

float Divide(float num1, float num2){
	return num1 / num2;
}

int main (){
	float num1, num2;
	int mdas;
	//yeyeyeye
	printf("1. Multiply \n2. Divide \n3. Add \n4. Subtract \n\nEnter a number [1/2/3/4]: ");
	scanf("%d", &mdas);
	
	num1 = getInput(1);
	num2 = getInput(2);
	
	switch (mdas){
		case 1: 
			Multiply(num1, num2);
			break;
		
		case 2: 
			Divide(num1, num2);
			break;
			
		case 3:
			Add(num1, num2);
			break;
			
		case 4:	
			Subtract(num1, num2);
	}
}
