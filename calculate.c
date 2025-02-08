#include <stdio.h>

float getInput(int x){
	float num;
	
	printf("\nEnter num%d: ",x);
	scanf("%f",&num);
	
	return num;
}

float Multiply(float num1, float num2){
	return num1 * num2;
}

float Divide(float num1, float num2){
	return num1 / num2;
}

float Add (float num1, float num2){
    return num1 + num2;
}

float Subtract (float num1, float num2) {
    return num1 - num2;
}

void printOutput (float fResult) {
    printf("\n= %.2f\n", fResult);
}

int main (){
	float num1, num2, final;
	int mdas;
	//yeyeyeye
	printf("1. Multiply \n2. Divide \n3. Add \n4. Subtract \n\nEnter a number [1/2/3/4]: ");
	scanf("%d", &mdas);
	
	num1 = getInput(1);
	num2 = getInput(2);
	
	switch (mdas){
		case 1: 
			final = Multiply(num1, num2);
			break;
		
		case 2: 
			final = Divide(num1, num2);
			break;
			
		case 3:
			final = Add(num1, num2);
			break;
			
		case 4:	
			final = Subtract(num1, num2);
	}
	printOutput(final);
}
