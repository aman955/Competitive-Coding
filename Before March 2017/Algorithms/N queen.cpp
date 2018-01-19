#include<iostream>
#define n 5
using namespace std;

void printSolution(int board[n][n])
{
    static  int k = 1;
    cout<<k++<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
           cout<<board[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}

bool issafe(int board[n][n],int row,int col)
{
	int i ,j;
	for(i=0;i<col;i++)
	if(board[row][i])
	return false;
	
	for(i=row,j=col;i>=0&&j>=0;i--,j--)
	if(board[i][j])
	return false;
	
	for(i=row,j=col;i<n&&j>=0;i++,j--)
	if(board[i][j])
	return false;	
	
	return true;
}

bool solvenqutil(int board[n][n],int col)
{
	int i;
	if(col==n)
	{
		printSolution(board);
		return true ;
	}
	
	for(i=0;i<n;i++)
	{
		if(issafe(board,i,col))
		{
			board[i][col]=1;
			
			solvenqutil(board,col+1);
			
			board[i][col]=0;
		}
	}
	return false;
}

void solvenq()
{
	int board[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			board[i][j]=0;
		}
	}
	
	if(solvenqutil(board,0))
	{
		cout<<"Solution does not exist"<<endl;
		return ;
	}
}


int main()
{
	solvenq();
	return 0;
}
