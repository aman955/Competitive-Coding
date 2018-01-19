#include <iostream>

using namespace std;

int main() {
    string str;
    cin>>str;
    int n=str.length(),i;
    int arr[10]={};
    for(i=0;i<n;i++)
    {
    arr[str[i]-'0']++;
    }
    int c=arr[0];
    int flag=1;
    for(i=0;i<10;i++)
    {
    if(arr[i])
    {
    	c=arr[i];
    	break;
	}
    }
    for(i=0;i<10;i++)
    {
    	if(arr[i])
    	{
    		if(arr[i]!=c)
    		flag=0;
		}
	}
    
    if(flag==1)
    cout<<1<<endl;
    else cout<<0<<endl;
}
