#include<stdio.h>
int factorial(int num);

int main(){
	int ans,num;
	printf("Enter the number for factorial: ");
	scanf("%d",&num);
	ans=factorial(num);
	printf("Factorial of %d is %d ",num,ans);
	return 0;
	
}

int factorial(int num){
	if(num==0)
		return 1;
	else
		return num*factorial(num-1);
}
