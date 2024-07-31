#include<stdio.h>
int cost[5][5],s[5][5],p[5],pos;
int mcm(int [],int,int);

int main(){
	int i,j,n,min;
	printf("Enter the number of matrices:- ");
	scanf("%d",&n);
	printf("Enter the order of matrices:-");
	for(i=0;i<n+1;i++)
		scanf("%d",&p[i]);	
	min=mcm(p,1,n);
	printf("Minimum number of multiplication is %d:-\n",min);
	printf("Parenthesis position is %d.\n\n",pos);
	
	printf("Cost matrix is:-\n");
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++)
				printf("%d ",cost[i][j]);
			printf("\n");
		}
	printf("Parenthesis matrix is:-\n");
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++)
				printf("%d ",s[i][j]);
			printf("\n");
		}
	
	return 0;	
}


int mcm(int p[5],int i,int j){
	int min=99999,r,k;
	
	if(i==j){
		cost[i][j]=0;
		s[i][j]=0;
		return 0;
	}
	
	else{
		for(k=i;k<j;k++){
			r=mcm(p,i,k)+mcm(p,k+1,j)+(p[i-1]*p[k]*p[j]);
			
			if(r<min){
				min=r;
				cost[i][j]=r;
				s[i][j]=k;
				pos=k;
			}
		}
	/*	printf("Cost matrix is:-\n");
		for(i=1;i<=3;i++){
			for(j=1;j<=3;j++)
				printf("%d ",cost[i][j]);
			printf("\n");*/
	return min;
	}
	
		}

