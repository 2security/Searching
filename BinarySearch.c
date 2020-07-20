#include<stdio.h>
#include<math.h>
int BinSearch(int a[100],int item,int l,int u);
int main()
	{
	int a[100],n,i,item,pos;
	printf("Enter how many number");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the element to be search");
	scanf("%d",&item);
	int p=BinSearch(a,item,0,n-1);
	p==-1?printf("Item not found"):printf("Item found at position %d",p+1);
	return 0;
	}
int BinSearch(int a[100],int item,int l,int u)
	{
	if(u>=l)
		{
		int mid=floor((l+u)/2);
		if(a[mid]==item)
			return mid;
	
		if(a[mid]<item)
			return BinSearch(a,item,mid+1,u);
	
		else
			return BinSearch(a,item,l,mid-1);
		}
	return -1;
	}
