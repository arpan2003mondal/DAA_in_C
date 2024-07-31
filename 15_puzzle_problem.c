#include<stdio.h>
int input[16];
int pattern[16]={0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0};

int main(){
	int i,j,k,sum=0;
	printf("Enter the pattern of the puzzle:");
	for(i=0;i<16;i++)
		scanf("%d",&input[i]);
	for(i=0;i<16;i++){
		for(j=i+1;j<16;j++)
			if(input[j]<input[i])
					sum=sum+1;
	}
	for(i=0;i<16;i++)
		if(input[i]==16){
			sum=sum+pattern[i];
			break;
		}
	if(sum%2==0)
		printf("Puzzle is solvable.\n");
	else
		printf("Puzzle is not solvable! \n");
		
return 0;
}
