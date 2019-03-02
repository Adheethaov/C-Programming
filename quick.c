#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int i, n=10, a[20];
void quicksort(int a[],int, int);
int main()
{

	
	srand(0);
	
	for(i=0;i<n;i++)
	{
		a[i]=rand();
		printf("@@ ");
	}
	/*printf("\nThe array inserted is :\n");
	i=0;
	while(i<n)
	{
		printf("%d  ",a[i]);
		i++;
	}*/
	


	
	

	quicksort(a,0,n-1);
	
	
	printf("\nThe sorted array is :\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}

	return 0;

}

void quicksort(int a[],int first, int last)
{
	int i,j,pivot,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		

		while(i<j)
		{
			while(a[i]<a[pivot] && i<last)
				i++;
			while(a[j]>a[pivot])
				j--;

			if(i<j)
			{
				temp=a[i];
				a[i]=a[pivot];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quicksort(a,first,j-1);
		quicksort(a,j+1,last);
	}
}
