//Bubble Sort 
#include <stdio.h>
void bubblesort(int arr[], int size)
{
	int i, j, temp;
	
	for (i=0; i<(size-1); i++)
	{
		for (j=0; j<(size-1); j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

void printarray(int arr[], int size)
{
	int i; 
	printf("\nARRAY : ");
	for (i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int size, i;
	printf("Enter array size: ");
	scanf("%d", &size);
	int arr[size];
	
	for (i=0; i<size; i++)
	{
		printf("Enter element %d - ", (i+1));
		scanf("%d", &arr[i]);
	}
	
	printarray(arr, size);
	
	bubblesort(arr, size);
	
	printarray(arr, size);
}
