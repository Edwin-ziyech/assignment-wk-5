/*
Name:Edwin Mbugua
Reg No:CT100/G/26173/25
Description:Water bill
*/

#include <stdio.h>
#include<math.h>
//main function
int main(){
	int units;
	float bill;
	
	printf("enter your units\t");
	scanf("%d",&units);
	
	if(units<=30){
        bill=20*units;
		printf("Total water bill:%.2f",bill);
	}
	
	if(units>60){
		bill=30*units;
		printf("Total water bill:%.2f",bill);
	}	
	
	else{
		bill=25*units;
		printf("Total water bill:%.2f",bill);
	}
		
}
