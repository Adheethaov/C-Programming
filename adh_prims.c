#include<stdio.h>
#include<math.h>
void main()
{

	int a,b,u,v,n,i,j,node=1;
	//n- to store the no:of nodes

	int visited[10]={0},min,mincost=0,cost[10][10];
	//cost[10][10]- to store  the adjacency matrix

	printf("\n Enter the number of nodes:");
	scanf("%d",&n);
	printf("\n Enter the adjacency matrix:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}

		//visited[1]=1;
		printf("\n");
	}
	visited[1]=1;
	while(node<n)
	{
		for(i=1,min=999;i<=n;i++)
			for(j=1;j<=n;j++)
				if(cost[i][j]<min)
					if(visited[i]!=0)
					{
						min=cost[i][j];
						a=u=i;
						b=v=j;
					}
					if(visited[u]==0 || visited[v]==0)//to check whether the vertex is visited or not
					{
						printf("\n Edge %d:(%d %d) cost:%d",node++,a,b,min);
						mincost+=min;
						visited[b]=1;
					}
					cost[a][b]=cost[b][a]=999;
	}
	printf("\n Minimun cost=%d\n",mincost);
}
