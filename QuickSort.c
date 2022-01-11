//Quick Sort Implementation Using Array
#include <stdio.h>

int partition(int arr[], int low, int high)
{
	int pivot=arr[high];
	int i=(low-1);
	int j, temp;
	
	for (j=low; j<high; j++)
	{
		if (arr[j]<=pivot)
		{
			i++;
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}
	}
	temp=arr[(i+1)];
	arr[(i+1)]=arr[high];
	arr[high]=temp;
	
	return (i+1);
}

void quicksort(int arr[], int low, int high)
{
	if (low<high)
	{
		int pi;
		pi=partition(arr, low, high);
		quicksort(arr, low, (pi-1));
		quicksort(arr, (pi+1), high);
	}
}

int main()
{
	int high, low, m;
	printf("Enter array size: ");
	scanf("%d", &m);
	int arr[m];
	low=0;
	high=(m-1);
	int i;
	
	for (i=0; i<=high; i++)
	{
		printf("Enter element %d- ", (i+1));
		scanf("%d", &arr[i]);
	}
	
	printf("\nUnsorted Array: ");
	for (i=0; i<=high; i++)
	{
		printf("%d ", arr[i]);
	}
	
	quicksort(arr, low, high);
	
	printf("\n\nSorted Array: ");
	for (i=0; i<=high; i++)
	{
		printf("%d ", arr[i]);
	}
}
