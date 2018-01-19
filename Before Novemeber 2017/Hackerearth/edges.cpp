#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,e,a,b,i,t,j,r,p;
   cin>>n>>e>>t;
   vector< int> vec[n+2];
   vector< pair< int, int> >  edg;
   bool visited[n+2]={};
    int level[n+2]={};
   for(i=1;i<=e;i++)
   {
       cin>>a>>b;
       edg.push_back(make_pair(a,b));
       vec[a].push_back(b);
       vec[b].push_back(a);
   }
   vector< int> disapp[e+2];
   
   
   for(i=1;i<=t;i++)
   {
       cin>>a>>b;
       if(b>e)
       continue;
       disapp[a].push_back(b);
   }
   
   queue<int> q;
   q.push(1);
   visited[1]=true;
   level[1]=0;
    int k;
   int flag=0,c;
   vector< int>::iterator it;
   while(!q.empty())
   {
   
       c=q.front();
       q.pop();
      if(c==n)
      {
          flag=1;
          break;
      }
      
       p=vec[c].size();
 
       for(i=0;i<p;i++)
       {
           if(!visited[vec[c][i]]&&vec[c][i])
           {
               level[vec[c][i]]=level[c]+1;
               visited[vec[c][i]]=true;
               q.push(vec[c][i]);
           }
       }
       
       k=disapp[level[c]+1].size();

       for(j=0;j<k;j++)
       {
    
           r=disapp[level[c]+1][j];
            a=edg[r-1].first;
           b = edg[r-1].second;
        
        for(i=0;i<vec[a].size();i++)
       {
		 if(vec[a][i]==b)
     {
	 vec[a][i]=0;
	 break;
}
}
     for(i=0;i<vec[b].size();i++)
     {
     	if(vec[b][i]==a)
     	{
     		vec[b][i]=0;
     		break;
		 }
	 }
     
       }
       
   }
   if(flag==1)
   {
       cout<<level[c]<<endl;
   }
   else
   cout<<"-1"<<endl;
}
