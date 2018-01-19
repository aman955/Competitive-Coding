#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<long long> vec(3);
	cin>>vec[0]>>vec[1]>>vec[2];
	sort(vec.begin(),vec.end());
	
long long diff=vec[2]-vec[0],count,count1;
if(diff%2==0)
{
	count=diff/2;
	vec[2]=vec[0];
}
else
{
	count=(diff-1)/2;
	vec[2]=vec[0]+1;
}
long long diff2=vec[1]-vec[0];

if(diff2%2==0)
{
	count1=diff2/2;
	vec[1]=vec[0];
}
else
{
	count1=(diff2-1)/2;
	if(diff2!=1)
	vec[1]=vec[0]+1;
}

sort(vec.begin(),vec.end());

long long ans=vec[2]+count+count1;
cout<<ans;


	

}
