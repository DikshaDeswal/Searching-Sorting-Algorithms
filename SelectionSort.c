//Selection Sort
#include <stdio.h>
void selectionsort(int arr[], int size)
{
	int i, j, k;
	int min;
	
	for (i=0; i<(size-1); i++)
	{
		min=arr[i];
		for (j=(i+1); j<size; j++)
		{
			if (arr[j]<min)
			{
				min=arr[j];
				k=j;
			}
		}
		arr[k]=arr[i];
		arr[i]=min;
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
	
	selectionsort(arr, size);
	
	printarray(arr, size);
}
