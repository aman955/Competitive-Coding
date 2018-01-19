#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int n,i,k;
	int t;
	cin>>t;
	while(t--)
	{
	cin>>n;
    vector<int> vec,newvec;
    int x;
	for(i=0;i<pow(2,n);i++)
	{
	cin>>x;
	vec.push_back(x);
	}
	
	sort(vec.begin(),vec.end());

if(n==1)
{
	 cout<<vec[1]<<endl;
	continue ;
}
	vec.erase(vec.begin());
	
	newvec.push_back(vec[0]);

	vec.erase(vec.begin());
	newvec.push_back(vec[0]);
	
	vec.erase(vec.begin());
	
    vec.erase(lower_bound(vec.begin(),vec.end(),newvec[0]+newvec[1]));

	

	//3 0 1 3 4 10 11 13 14
	while(newvec.size()!=n)
	{
	k=newvec.size();
	unsigned int pow_set_size = pow(2, k);
    int counter, j,val=0;
    
    for(counter = 0; counter < pow_set_size; counter++)
    {
    	val=0;
      for(j = 0; j < k; j++)
       {
         
          if(counter & (1<<j))
            val=val+newvec[j];
       }
	   if(val!=0)
       	vec.erase(lower_bound(vec.begin(),vec.end(),val+vec[0]));
    }
    
			newvec.push_back(vec[0]);
			vec.erase(vec.begin());
			
	}
	sort(newvec.begin(),newvec.end());
	
	for(i=0;i<newvec.size();i++)
	cout<<newvec[i]<<" ";
	cout<<endl;
	
}
	
}
