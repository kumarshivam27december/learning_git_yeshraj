#include <stdio.h>
void main()
{
	int arr[] = {4,-2,11,9,0};
	int step,i,s,temp;
	s=sizeof(arr)/sizeof(arr[0]);
//	printf("%d",s);
    for(step=0;step<s;step++)
    {
    	for(i=0;i<s-1-step;i++)
    	{
    		if(arr[i]>arr[i+1])
    		{
    		temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			
			}
		}
	}
	
	for(i=0;i<s;i++)
	{
		printf("%d ",arr[i]);
	}
}
