/*
Name:Edwin Mbugua
Reg No:CT100/G/26173/25
Description:Eligibility for final exam
*/

#include<stdio.h>
//main function
int main(){
	int attendance;
	printf("enter your attendance\t");
	scanf("%d",&attendance);
	
	int avaragemarks;
	printf("enter your avaragemarks\t");
	scanf("%d",&avaragemarks);
	
	if (attendance>=75&&avaragemarks>=40){
		printf("eligible for final exam.");
	}
	else{
		printf("not eligible for final exam.");

	}
		
}