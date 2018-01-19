#include<iostream>
using namespace std;

int main()
{
	int n,p;
	cin>>n>>p;
	if(p==1||p==n||(n%2==1)&&(p==n-1))
	{
		cout<<"0";
	}
	int front=p/2;
	int back=(n-p)/2;
	cout<<min(front,back)<<endl;
	
}
