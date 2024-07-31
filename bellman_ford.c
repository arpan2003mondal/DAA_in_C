#include<stdio.h>
void bellman_ford(int);
int n,adj[10][10],cost[10]={0,99,99,99,99,99,99,99,99,99}; /*first element is zero because we have 
															started the matrix from 1 index not from 0*/
int final[10]; // this is used for checking negative loop
int main(){
	int i,j,k;
	printf("Enter the number of vertices:");
	scanf("%d",&n);
	printf("Enter the weights: \n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			scanf("%d",&adj[i][j]);
	}
	int start;
	printf("Enter the starting vertex: ");
	scanf("%d",&start);
	bellman_ford(start);	
	
	return 0;
}

void bellman_ford(int start){
	int i,u,v,w,count=0;
	cost[start]=0;
	
	for(w=1;w<n;w++){
		for(u=1;u<=n;u++){              // u is the starting vetex && v is the destination vertex
			for(v=1;v<=n;v++){
				if(cost[v]>cost[u]+adj[u][v])
					cost[v]=cost[u]+adj[u][v];
			}
		}
//	printf("\n Cost matrix is:--[for k= %d]   ",w);
//	for(i=1;i<=n;i++)
//		printf("%d ",cost[i]);
	}
	printf("\n");
	for(i=1;i<=n;i++)
		final[i]=cost[i];
		
	// for checking negative loop we need to calculate once more
	for(u=1;u<=n;u++){              
			for(v=1;v<=n;v++){
				if(final[v]>final[u]+adj[u][v])
					final[v]=final[u]+adj[u][v];
			}
		}
	
	for(i=1;i<=n;i++){
		if(cost[i]==final[i])
			count++;
	}
	
	if(count==n){
	printf("\nFinal Cost matrix is:-- ");
	for(i=1;i<=n;i++)
		printf("%d ",cost[i]);
	}
	else
		printf("Negative loop is there so no solution exist..\n");
}
