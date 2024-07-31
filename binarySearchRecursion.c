// binary search using recursion

#include<stdio.h>
int binary_search(int *a,int beg,int end,int item);

int main()
{
int a[20],i,n,item;
printf("Enter the number of elements of the array:");
scanf("%d",&n);
printf("Enter the elements of the array:");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
printf("\nEnter the element you want to find: ");
scanf("%d",&item);
int p=binary_search(a,0,n-1,item);	
if(p==-1)
	printf("%d is not present!",item);
else
	printf("%d is present at position %d",item,p+1);
return 0;
}



int binary_search(int *a,int beg,int end,int item){
	int mid;
	if(beg==end){
		if(a[beg]==item)
			return beg;
		else
			return -1;
	}
	else {
		mid=(beg+end)/2;
		if(a[mid]==item)
			return mid;
		else if(item<a[mid])
			return binary_search(a,beg,mid-1,item);
		else
			return binary_search(a,mid+1,end,item);
	}
	
}




