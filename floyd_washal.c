#include<stdio.h>
int adj[10][10];

int main(){
	int n,i,j,k,x;
	printf("Enter the number of vertices:");
	scanf("%d",&n);
	printf("Enter the weights: ");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			scanf("%d",&adj[i][j]);
	}
//	printf("Adjacency Matrix is:\n ");
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n;j++)
//			printf("%d ",adj[i][j]);
//		printf("\n");
//	}
	
	for(k=1;k<=n;k++){
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				x=adj[i][k]+adj[k][j];
				if(adj[i][j]>x)
					adj[i][j]=x;
			}
		}
		printf("Adjacency Matrix is:(for k = %d )\n ",k);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			printf("%d ",adj[i][j]);
		printf("\n");
	}
	}
	printf("Final Adjacency Matrix is: \n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			printf("%d ",adj[i][j]);
		printf("\n");
	}
	
	return 0;
}
