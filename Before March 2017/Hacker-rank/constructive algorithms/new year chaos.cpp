#include<iostream>
using namespace std;



static long long minBribes(long arr[],long n) {
    long countBribes = 0;
    long* original = new long[n];
    long i;
    for(i=0; i<n; i++) {
        original[i] = i+1;
    }

    for(i=0; i<n; i++) {
        if(original[i] == arr[i])
            continue;

        else {
            if(i+1 < n && original[i+1] == arr[i]){
                countBribes++;
                original[i+1] = original[i];
                original[i] = arr[i];
            }

            else if(i+2 < n && original[i+2] == arr[i]) {
                countBribes += 2;
                original[i+2] = original[i+1];
                original[i+1] = original[i];
                original[i] = arr[i];
            }

            else
                return -1;
        }
    }

    return countBribes;
}

    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    	long n;
    	cin>>n;
    	long arr[n],i;
    	for(i=0;i<n;i++)
    	cin>>arr[i];
    	long ans=minBribes(arr,n);
    	if(ans==-1)
    	cout<<"Too chaotic";
    	else cout<<ans;
    }
    	
	}
    

