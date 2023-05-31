#include <stdio.h>
void main()
{
	int arr[5] = {11,12,13,14,15};
	/*int j;
	for(j=0;j<5;j++)
	{
		scanf("\n%d",&arr[j]);
	}*/

/*
	int i;
	for(i=0;i<5;i++)
	{
//		printf("\narray[%d] = %d",i,arr[i]);
		printf("%d ",arr[i]);
		
	}
	int even_sum = 0;
	int odd_sum = 0;
	for(i=0;i<5;i++)
	{
		if(i%2==0){
		
		even_sum=even_sum+arr[i];
		}
		else
		{
			odd_sum=odd_sum+arr[i];
		}
	}
	printf("\nsum of array even number of array = %d",even_sum);
		printf("\nsum of array odd number of array = %d",odd_sum);

	*/
	
	
	// finding of max and min in an array
	int i,max,min;
	max=min=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\nbiggest element of array is %d",max);
	printf("\nsmallest element of array is %d",min);

	
}
