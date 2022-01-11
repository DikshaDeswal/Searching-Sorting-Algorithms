//Counting Sort Implementation Using Array
#include <stdio.h>
void countingsort(int arr[], int size)
{
	int output[size];
	int i;
	int max=arr[0];
	
	//To find max element of unsorted array
	for (i=1; i<size; i++)
	{
		if (arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	int count[100];
	//Now initialise the array count with zero values
	for (i=0; i<=max; i++)
	{
		count[i]=0;
	}
	
	//Counting occurrence of each array element
	for (i=0; i<size; i++)
	{
		count[arr[i]]++;
	}
	
	//Storing the cumulative count of array elements
	for (i=1; i<=max; i++)
	{
		count[i]+=count[(i-1)];
	}
	
	//Maping the array with the count indexes
	for (i=0; i<size; i++)
	{
		output[count[arr[i]]-1]=arr[i];
	}
	
	//Coping the elements to original array
	for (i=0; i<size; i++)
	{
		arr[i]=output[i];
	}
}

void printarray(int arr[], int size)
{
	int i;
	printf("\nArray: ");
	for (i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int size, i;
	printf("Enter array size- ");
	scanf("%d ", &size);
	int arr[size];
	
	for (i=0; i<size; i++)
	{
		printf("Enter element %d - ", (i+1));
		scanf("%d", &arr[i]);
	}
	
	printf("\nUNSORETD ARRAY : ");
	printarray(arr, size);
	
	countingsort(arr, size);
	
	printf("\nSORTED ARRAY : ");
	printarray(arr, size);
}

