#include <stdio.h>

int main(){
	int a, bir, on, yuz, yig;
	scanf("%3d", &a);
	bir = a % 10;
	on = (a / 10) % 10;
	yuz = a / 100;
	yig = bir + on + yuz;
	
	printf("Son  == > %d\n", a);
	printf("Birlik  == > %d\nOnlik  ==>  %d\nYuzlik  ==>  %d\n", bir, on, yuz);
	printf("Yigindi  ==> %d", yig);
	 
	
	
	
	
	
	
	return 0;
}
