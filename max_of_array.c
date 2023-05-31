#include <stdio.h>
void main()
{
	int arr[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	int max=arr[0];
	for (i=0;i<5;i++)
	{
	if(arr[i]>max)
	{
		max=arr[i];
		}	
	}
	printf("\nmax of the array is %d",max);
}
