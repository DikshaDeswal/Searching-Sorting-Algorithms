//Insertion Sort 
#include <stdio.h>
void insertionsort(int arr[], int size)
{
	int i, j;
	int key, temp;
	
	for (i=0; i<size; i++)
	{
		key=arr[i];
		j=(i-1);
		while (arr[j]>key && j>=0)
		{
			arr[(j+1)]=arr[j];
			j--;
		}
		arr[j+1]=key;
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
	
	insertionsort(arr, size);
	
	printarray(arr, size);
}
