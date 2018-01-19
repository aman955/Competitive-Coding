#include<iostream>
using namespace std;
#define n 4

void printboard(int board[n][n])
{
	static int k=1;
	int i,j;
	cout<<"Board 1"<<k++<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<board[i][j];
		}
		cout<<endl;
	}
}

bool issafely(int board[n][n],int row,int col)
{
	int i,j;
	for(i=0;i<n;i++)
	if(board[row][i])
	return false;
	
	for(i=row,j=col;i>=0,j>=0;i--,j--)
	if(board[i][j])
	return false;
	
	for(i=row,j=col;i>=0,j<n;i--,j++)
	if(board[i][j])
	return false;
	
	return true;
}

bool solvenquntil(int board[n][n],int col)
{
	if(col==n)
	{
		printboard(board);
		return true;
	}
	int i,j;
	for(i=0;i<n;i++)
	{
		if(issafely(board,i,col))
		{
			board[i][col]=1;
			solvenquntil(board,col+1);
			board[i][col]=0;
		}
	}
	
	return false;
}


void solvenq()
{
	int i,j;
	int board[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			board[i][j]=0;
		}
	}
	if(solvenquntil(board,col))
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
