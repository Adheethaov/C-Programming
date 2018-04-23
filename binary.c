//program -binary search

#include<stdio.h>
//including main header file 
#include<stdlib.h>

#include<time.h>
//including header file to calculate the time.

int i,j,item,pos,a[30000],n,temp;
clock_t t1,t2,c1,c2,d1,d2;
double m,w,y;
void binary(int a[],int,int);
void main()
{
	int i,j,item,pos,a[300000],temp;
	clock_t t1,t2,c1,c2,d1,d2;
	double m,w,y;	
	srand(0);//to use for random generation of numbers
	
	//To open a file

  do
  {
	printf("\n\nEnter the size of the array: ");
	scanf("%d",&n);
	FILE *fptr;
	FILE *fptr1;
	fptr1=fopen("binary_graph.txt","a");
	fptr=fopen("binary_1.txt","a");
	fprintf(fptr,"\nFor an input of n:%d ",n);
	fprintf(fptr1,"\n%d",n);
	fprintf(fptr,"\n  ________ _________  ________ ________  ________ _______ ________ ");
	fprintf(fptr,"\n |   Best Case        |   Average Case   |      Worst Case        |");
	fprintf(fptr,"\n  ________ _________  ________ ________  ________ _______ ________ ");
	fclose(fptr);
	fclose (fptr1);
	//accepting values to the array
	for(i=0;i<n;i++)
	{
		a[i]=rand();
	}
	
	//Inorder to do binary search , we have to sort the array , here am using bubble sort technique

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);

	//to do binary search we have to keep a mid value

	
	
	
	

	// accept the element to be searched in the variable item
	printf("\nEnter the element  to be searched randomly:");
	scanf("%d",&item);
	t1=clock();
	
		binary(a,item,n);
	
	t2=clock();
	m=(t2-t1)/(double)CLOCKS_PER_SEC;
	printf("The time taken for random search is %g",m);


	printf("\nEnter the element  to be searched from the beginning:");
	scanf("%d",&item);
	c1=clock();
	
		binary(a,item,n);
	
	c2=clock();
	w=(c2-c1)/(double)CLOCKS_PER_SEC;
	printf("The time taken for  search from the beginning  is %g",w);


	printf("\nEnter the element  to be searched from the end:");
	scanf("%d",&item);
	d1=clock();
	
		binary(a,item,n);
	
	d2=clock();
	y=(d2-d1)/(double)CLOCKS_PER_SEC;
	printf("The time taken for search from the last is %g",y);



	fptr=fopen("binary_1.txt","a");
	fprintf(fptr,"\n |      %g      |     %g     |       %g            |",w,m,y);
	fprintf(fptr,"\n  ________ _________  ________ ________  ________ _______ ________ ");
	fptr1=fopen("binary_graph.txt","a");
	fprintf(fptr1,"%g",y);
	fclose (fptr);
	fclose (fptr1);
   }while(n!=0);



}
void binary(int a[],int item,int n)
{
	int mid,l=0,u=n;
	mid=(l+u)/2;
			
			while(l<=u)
			{
      				if(a[mid] < item)
         				l = mid + 1;    
      				else if(a[mid] == item) 
				{
        					printf("\n Elemnt found at location %d.\n", mid+1);
        					break;
				}
		
      				else
					u=mid-1;
 	     			mid= (l+u)/2;
  				
 				if(l > u)
      					printf("\nElement not found\n");
				i++;
			}
			


}
	
		


