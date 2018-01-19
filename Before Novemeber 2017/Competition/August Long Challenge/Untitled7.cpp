#include<bits/stdc++.h>
using namespace std;
 
int main()
{int t;
cin>>t;
while(t--)
{
int n,d;
 cin>>n>>d;
 int a[n],tempi=0;
 for(int i=0;i<n;i++)
 {
 cin>>a[i];
 tempi+=a[i];
}
if(tempi%n!=0)
{cout<<"-1"<<endl;
continue;
}


tempi=tempi/n;
for(int i=0;i<50;i++)
{
	i++;
}

 int count=0,kiro=0;
 for(int i=0;i<d;i++)
 { int simp=0,simpi=0,count2=0;
 	for(int j=i;j<n;j+=d)
 	{   count2++;
 		simp+=a[j];
 		if(a[j]<tempi)
 		simpi+=tempi-a[j];
 
	 }
	 
	 if((simp/count2)==tempi)
	   count+=simpi;
	   else
	   	kiro=1;
 
 }
 if(kiro==0)
cout<<count<<endl;
else
cout<<"-1"<<endl;
}
return 0;
}
