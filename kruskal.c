#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int i,j,u,v,a,b,n,ne=1,k,cost[10][10],min,mincost=0,parent[10];
int find(int);
int uni(int,int);


int main()
{
	printf("\nEnter the number of vertices:");
	scanf("%d",&n);
	
	printf("\nEnter the adjacency matrix:");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	

  while(ne<n)
  {
	for(i=1,min=999;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(cost[i][j]<min)
			{
				min=cost[i][j];
				a=u=i;
				b=v=j;
			}
		}
	}
	
	u=find(u);
	v=find(v);
	if(uni(u,v))
	{
		printf("\nEdges %d: 	(%d,%d)		cost=%d",ne++,a,b,min);
		mincost+=min;
	}
	cost[a][b]=cost[b][a]=999;
  }

	printf("\nMincost =%d",mincost);
}

int find(int i)
{
	while(parent[i])
		i=parent[i];
	return i;
}
int uni(int i, int j)
{
	if(i!=j)
	{
		parent[j]=i;
		return 1 ;
	}
	return 0;
}
	

