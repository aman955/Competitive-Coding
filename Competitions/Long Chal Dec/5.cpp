#include<iostream>
#include<vector>
#include<set>
#include<queue>
using namespace std;

int arr[100005]={};
vector<int> vec[100005]={};


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,i;
		queue< pair<int,int> > doubqueue,singqueue;
        queue<int> sing1queue,doub1queue;
        set< pair<int,int> > s;
        for(i=0;i<=100000;i++)
        vec[i].clear();
		cin>>n;
		if(n==1)
		{
			cin>>x;
			cout<<0<<endl<<x<<endl;
		}
		else if(n==2)
		{
			int a,b;
			cin>>a>>b;
			if(a==b)
			{
				cout<<0<<endl<<a<<" "<<b<<endl;
			}
			else
			{
				cout<<2<<endl<<b<<" "<<a<<endl;
			}
		}
		else if(n==3)
		{
			int a,b,c;
			cin>>a>>b>>c;
			if(a==b||b==c||c==a)
			{
				cout<<2<<endl;
				if(a==b)
				{
					cout<<a<<" "<<c<<" "<<b<<endl;
				}
				else if(b==c)
				{
					cout<<b<<" "<<a<<" "<<c<<endl;
				}
				else
				{
					cout<<a<<" "<<c<<" "<<b<<endl;
				}
			}
			else
			{
				cout<<3<<endl;
				cout<<b<<" "<<c<<" "<<a<<endl;
			}
			
		}
		else
		{
		
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			vec[arr[i]].push_back(i);
		}
		for(i=0;i<=100000;i++)
		{
			if(vec[i].size()==2)
			{
			doubqueue.push(make_pair(i,vec[i][0]));
			doubqueue.push(make_pair(i,vec[i][1]));
			doub1queue.push(i);
		   }
		   else if(vec[i].size()==1)
		   {
		   	singqueue.push(make_pair(i,vec[i][0]));
		   	sing1queue.push(i);
		   }
		   
		}
		int temp;
		int slen=sing1queue.size();
		int dlen=doub1queue.size();
		
		if(!doub1queue.empty())
		{
		temp=doub1queue.front();
		doub1queue.pop();
		doub1queue.push(temp);
        }
        pair<int,int> temp1,temp2;
        int p1,p2;
		while(!doub1queue.empty())
		{
			temp=doub1queue.front();
			temp1=doubqueue.front();
			doubqueue.pop();
			temp2=doubqueue.front();
			doubqueue.pop();
			p1=temp1.second;
			p2=temp2.second;
			s.insert(make_pair(temp1.second,temp));
			s.insert(make_pair(temp2.second,temp));
			doub1queue.pop();
		}
		if(!sing1queue.empty())
		{
		temp=sing1queue.front();
		sing1queue.pop();
		sing1queue.push(temp);
	    }
		while(!sing1queue.empty())
		{
		temp = sing1queue.front();
		temp1 = singqueue.front();
		singqueue.pop();
		s.insert(make_pair(temp1.second,temp));	
		sing1queue.pop();
		}
		set< pair<int,int> >::iterator it;
		pair<int,int> p;
		int k=1,j=1;
		int s1,s2;
		for(i=1;i<=100005;i++)
		{
			if(vec[i].size()==1)
			{
				if(k)
				{
				s1=vec[i][0];
				k=0;
			    }
				else if(j&&slen>=2)
				{
				s2=vec[i][0];
				j=0;
			    }
			}
		}
		    i=0;
			for(it=s.begin();it!=s.end();it++)
		{
			p=*it;
			arr[i]=p.second;
			i++;
		}
		if(slen==1)
		{
			swap(arr[p1],arr[s1]);
		}
		else if(dlen==1)
		{
			swap(arr[p1],arr[s1]);
			swap(arr[p2],arr[s2]);
		}
		cout<<n<<endl;
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
		cout<<endl;
	}
}
}
