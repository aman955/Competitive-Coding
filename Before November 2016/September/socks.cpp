#include<iostream>
using namespace std;
int main()
    {
    int t,n,c,ans=0;
    cin>>t;
    n=t;
    int a[101]={0};
    while(t--)
        {
        cin>>c;
        a[c]++;
    }
    for(int i=1;i<=100;i++)
        {
        if(a[i]>1)
        {
        ans=ans+a[i]/2;	
        }
    }
    cout<<ans;
}
