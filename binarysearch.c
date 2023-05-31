#include <stdio.h>
void main()
{
	int arr[]={2,3,4,8,9};
	int first,last,middle,search,i;
	int n=sizeof(arr)/sizeof(arr[0]);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	search=8;
	while(first<=last)
	{
		if(arr[middle]<search){
			first=middle+1;
		}
		else if(arr[middle]==search)
		{
			printf("Element is at %d position",middle+1);
			break;
		}
		else{
			last=middle-1;
		}
		middle=(first+last)/2;
	}
	if(first>last)
	{
		printf("Element not found");
	}
	
}
