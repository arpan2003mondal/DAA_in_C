#include<stdio.h>
int m=3,n=4,x[5]={0,0,0,0,0},adj[5][5];
int mcolouring(int);
int nextvalue(int);


int main(){
	int k,j,i;
	printf("Enter the adjancency matrix:");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&adj[i][j]);
		}
	}
	
	k=1;
	mcolouring(k);
	
	return 0;
}

int mcolouring(int k){
	
	int i;
	do{
		
		nextvalue(k);
		if(x[k]==0)
			return 0;
		if(k==n){
			for(i=0;i<=n;i++){
				printf("%d ",x[i]);
			}
			printf("\n");
		}
		else
			mcolouring(k+1);
	}
	while(1);
	 
}

int nextvalue(int k){
	int j;
	do{
		x[k]=(x[k]+1)%(m+1);
		if(x[k]==0)
			return 0;
		for(j=1;j<=n;j++){
			if((adj[k][j]==1) && (x[k]==x[j]))
				break;
		}
		
		if(j==n+1)
			return 0;
			
	}while(1);
}
