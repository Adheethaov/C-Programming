
/*all pair shortest path */
#include<stdio.h>
#define m 10
void main()
{
	int cost[m][m];
	int i,j,n;
	void floyd(int[][j],int);
	printf("Enter no. of vertices : ");
	scanf("%d",&n);
	printf("Enter elements of cost : ");
	for(i=0;i<n;i++)
	{
  		for(j=0;j<n;j++)
  		{
   			//printf("\ncost[%d][%d]:",i,j);
   			scanf("%d",&cost[i][j]);
  		}
 	}
 	printf("The input cost matrix is:-\n");
 	for(i=0;i<n;i++)
 	{
 		 for(j=0;j<n;j++)
  		 {
   			if(cost[i][j]==999)
    				printf("inf\t");
   			else
    		 		printf("%d\t",cost[i][j]);
  		}
  		printf("\n");
 	}
 	floyd(cost,n);
 	printf("The final cost matrix :\n");
 	for(i=0;i<n;i++)
 	{
  		for(j=0;j<n;j++)
		{
			if(cost[i][j]==999)
    				printf("inf\t");
   			else
    		 		printf("%d\t",cost[i][j]);
		}
 		printf("\n");
 	}
}
void floyd(int a[m][m],int n)
{
 	int k,i,j;
  	for(k=0;k<n;k++)
  	{
    		for(i=0;i<n;i++)
    		{
			for(j=0;j<n;j++)
			{
	  			if(a[i][j]>(a[i][k]+a[k][j]))
					a[i][j]=(a[i][k]+a[k][j]);
			}
    		}
  	}
}




