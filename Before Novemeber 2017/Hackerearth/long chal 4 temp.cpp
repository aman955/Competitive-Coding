#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int arr[1000001]={};
int main()
{
    int n,t,i,x,y,val,q;
    cin>>t;
    while(t--)
    {
        int flag=1;
        cin>>n>>q;
        for(i=0;i<1000001;i++)arr[i]=-1;
        while(q--)
        {
            cin>>x>>y>>val;
            if(arr[x]==0||arr[x]==1)
            {
                if(arr[y]==0||arr[y]==1)
                {
                    if(val!=abs(arr[x]-arr[y]))
                        flag=0;
                }
                else
                {
                    if(val==1)
                    {
                        if(arr[x]==0)
                            arr[y]=1;
                        else
                            arr[y]=0;
                    }
                    else
                        arr[y]=arr[x];
                }
            }
            else if(arr[y]==0||arr[y]==1)
            {
                if(val==1)
                    {
                        if(arr[y]==0)
                            arr[x]=1;
                        else
                            arr[x]=0;
                    }
                    else
                        arr[x]=arr[y];
            }
            else
            {
                if(val==0)
                    arr[x]=arr[y]=0;
                else
                {
                    arr[x]=0;
                    arr[y]=1;
                }
            }
        }
        if(flag==1)
        cout<<"yes"<<endl;
        else 
        cout<<"no"<<endl;
    }
 
}
