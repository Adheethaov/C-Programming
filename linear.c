//Linear search Program

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void linear(int a[],int item, int n);
void main()
{
	int i,j,item,a[300000];
	double m,w,y;
	clock_t t1,t2,c1,c2,d1,d2;
	srand(0);

  do
  {

	printf("\n\nEnter the size of the array: ");
	scanf("%d",&n);
	FILE *fptr1;
	FILE *fptr;
	fptr1=fopen("linear_graph.txt","a");
	fptr=fopen("linear_a.txt","a");
	fprintf(fptr1,"\n%d",n);
	fprintf(fptr,"\n\nfor an input %d ",n);
	fprintf(fptr,"\n  ________ _________  ________ ________  ________ _______ ________ ");
	fprintf(fptr,"\n |   Best Case        |   Average Case   |      Worst Case        |");
	fprintf(fptr,"\n  ________ _________  ________ ________  ________ _______ ________ ");
	fclose (fptr);
	fclose(fptr1);
	for(i=0;i<n;i++)
	{
		a[i]=rand();
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	

	printf("\nEnter the element  to be searched randomly:");
	scanf("%d",&item);
	t1=clock();
	
		linear(a,item,n);
	
	t2=clock();
	m=(t2-t1)/(double)CLOCKS_PER_SEC;
	printf("\nThe time taken for random search is %g",m);


	printf("\nEnter the element  to be searched from the beginning:");
	scanf("%d",&item);
	c1=clock();
	
		linear(a,item,n);
	
	c2=clock();
	w=(c2-c1)/(double)CLOCKS_PER_SEC;
	printf("The time taken for  search from the beginning  is %g",w);


	printf("\nEnter the element  to be searched from the end:");
	scanf("%d",&item);
	d1=clock();
	
		linear(a,item,n);
	
	d2=clock();
	y=(d2-d1)/(double)CLOCKS_PER_SEC;
	printf("The time taken for search from the last is %g",y);


	fptr=fopen("linear_a.txt","a");
	fptr1=fopen("linear_graph.txt","a");
	fprintf(fptr,"\n |      %g      |     %g     |       %g            |",w,m,y);
	fprintf(fptr,"\n  ________ _________  ________ ________  ________ _______ ________ ");
	fprintf(fptr1," %g",y);
	fclose (fptr);
	fclose(fptr1);
  }while(n!=0);

}
void linear(int a[],int item, int n)
{
		int i,f=0,pos;	
			for(i=0;i<n;i++)
			{
				if(a[i]==item)
				{
					f=1;
					pos=i;
					break;
				}
		
			}
			
			if(f==1)
				printf("\nelement found at position %d",pos+1);
		
			else
				printf("\nElement not found");
}
		
	
