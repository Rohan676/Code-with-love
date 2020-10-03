#include<stdio.h>
#include<stdbool.h>
long factorial(n){
	long fact=1;
	
	while(n>1){
		fact=n*factorial(n-1);	
		return fact;
	}
	return fact;
}
void main(){
	long n;
	printf("Enter a number:- ");
	scanf("%d",&n);
	long result=factorial(n);
	printf("factorial of %d is :- %d",n,result);
}
