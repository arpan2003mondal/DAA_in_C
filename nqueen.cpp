#include <stdio.h>
#include<math.h>
void nqueen(int );
int place(int, int);
void show();
int x[10],n,count=0;
int main() {
    int k;
    printf("how many queens");
    scanf("%d",&n);
    k=1;
    nqueen(k);
   
    printf("total no of answer is : %d",count);
    return 0;
}

void nqueen(int k){
    int i;
    for(i=1;i<=n;i++)
    {
        if(place(k,i)==1)
        {
            x[k]=i;
            if(k==n){
            show();
                count++;
            }
            else
            nqueen(k+1);
           
                }
        }
}
    int place(int k, int i)
    {
        int j;
        for(j=1;j<k;j++)
        {
            if((x[j]==i) || (abs(x[j]-i)==abs(j-k)))
            return 0;
        }
        return 1;
       
       
    }
    void show(){
        int i;
        for(i=1;i<=n;i++)
        printf(" %d ",x[i]);
       
        printf("\n");
       
       
    }
