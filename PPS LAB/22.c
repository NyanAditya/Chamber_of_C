// Author: Aditya S. CSAI-A1

#include<stdio.h>

int main()
{
	int size, i=3;
	
	printf("Enter the size of the Array: ");
	scanf("%d", &size);
	
	int a[size], b[size], sum[size];
	
	// Getting the Array elements from the user
	while(i-- > 0)
	{
		for(int j = 0; j<size; j++)
		{
			if(i==2){
				printf("Element %d of A: ", j+1);
				scanf("%d", &a[j]);
				continue;	
							
			} 
			else if(i==1){
				printf("Element %d of B: ", j+1);
				scanf("%d", &b[j]);
				continue;
			}
						
		}
	}
	
	//Sum of the Elements
	printf("\nSum of Array elements are as follows:\n");
	i=0;
	while(i<size)
	{
		sum[i] = a[i] + b[i];
		printf("Sum element %d: %d\n", i+1, sum[i]);
		i++;
	}
	
	return 0;
}