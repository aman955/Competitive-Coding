#include<iostream>
#define vi 4
using namespace std;


void printSolution(int color[])
{
    printf("Solution Exists:"
            " Following are the assigned colors \n");
    for (int i = 0; i < vi; i++)
      printf(" %d ", color[i]);
    printf("\n");
}

bool issafe(int v,int graph[vi][vi],int color[],int k)
{
	for(int i=0;i<vi;i++)
	{
		if(graph[vi][i] && color[i]==k)
		return false;
	}
	return true;
}

bool graphcolorutil(int graph[vi][vi],int m,int color[],int c)
{
	if(vi==c)
	{
		return true;
	}
	
	for(int k=1;k<=m;k++)
	{
		if(issafe(vi,graph,color,k))
		{
			color[c]=k;
			if(graphcolorutil(graph,m,color,k+1))
			return true;
			color[c]=0;
		}
	}
	return false;
}


void graphcolor(bool graph[vi][vi],int m)
{
    int color[vi];
    for(int i=0;i<vi;i++)
    color[i]=0;
    
    if(graphcolorutil(graph,m,color,0)==false)
    {
    	cout<<"Solution does not exist"<<endl;
    	return ;
	}
	printSolution(color);
	return true;
}

int main()
{
	bool graph[vi][vi] = {{0, 1, 1, 1},
        {1, 0, 1, 0},
        {1, 1, 0, 1},
        {1, 0, 1, 0},
    };
    int m;
    cin>>m;
    graphcolor(graph,m);
}
