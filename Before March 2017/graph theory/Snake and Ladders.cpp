#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int i;
	vector< vector <int> > v(101);
	vector< vector <int> >::iterator it;
	for(i=1;i<=94;i++)
	{
		v[i].push_back(i+6);
		v[i].push_back(i+5);
		v[i].push_back(i+4);
		v[i].push_back(i+3);
		v[i].push_back(i+2);
		v[i].push_back(i+1);
	}
	v[95].push_back(5);v[95].push_back(4);v[95].push_back(3);v[95].push_back(2);v[95].push_back(1);
	v[96].push_back(4);v[96].push_back(3);v[96].push_back(2);v[96].push_back(1);
	v[97].push_back(3);v[97].push_back(2);v[97].push_back(1);
	v[98].push_back(2);v[98].push_back(1);
	v[99].push_back(1);
	
	cin>>ladders>>snakes;
	for(i=0;i<ladders;i++)
	{
		cin>>a>>b;
		it=v[a].begin();
		v[a].insert(it,b);
		v[a].find	}
	
}
