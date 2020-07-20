#include<stdio.h>
int LinearSearch(int arr[],int n,int item);
int main()
	{
	int arr[100],i,j,n,item,pos;
	printf("\nEnter the no of elements of elements");
	scanf("%d",&n);
	
	printf("\nEnter elements of the array");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("\nEnter the element to be searched");
	scanf("%d",&item);
	
	pos=LinearSearch(arr,n,item);
	pos==-1?printf("\nElement not found"):printf("\nElement %d is found at position=%d ",item,pos);
	
	return 0;
	}
int LinearSearch(int arr[],int n,int item)
	{
	int i;
	for(i=0;i<n;i++)
		{
		if(arr[i]==item)
			return i+1;
		}
	return -1;
	}
	
	
	
	
	
