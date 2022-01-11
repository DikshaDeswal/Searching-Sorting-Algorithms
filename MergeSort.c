//Mergesort Implementation Using Array
#include <stdio.h>
void merge(int arr[], int p, int q, int r)
{
	int n1=(q-p+1);
	int n2=(r-q);
	
	int L[n1], M[n2];
	int i, j, k;
	
	for (i=0; i<n1; i++)
	{
		L[i]=arr[(p+i)];
	}
	for (j=0; j<n2; j++)
	{
		M[j]=arr[(q+j+1)];
	}
	
	i=0;
	j=0;
	k=p;
	
	while (i<n1 && j<n2)
	{
		if (L[i]<=M[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=M[j];
			j++;
		}
		k++;
	}
	
	while (i<n1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while (j<n2)
	{
		arr[k]=M[j];
		j++;
		k++;
	}	
}

void mergesort(int arr[], int p, int r)
{
	if(p<r)
	{
		int q;
		q=p + (r-p)/2;
		
		mergesort(arr, p, q);
		mergesort(arr, (q+1), r);
		merge(arr, p, q, r);
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
	printf("\n");
}

int main()
{
	int size, i;
	printf("Enter array size- ");
	scanf("%d", &size);
	int arr[size];
	
	for (i=0; i<size; i++)
	{
		printf("Enter element %d- ", (i+1));
		scanf("%d", &arr[i]);
	}
	
	printarray(arr, size);
	
	mergesort(arr, 0, size-1);
	
	printarray(arr, size);
}
