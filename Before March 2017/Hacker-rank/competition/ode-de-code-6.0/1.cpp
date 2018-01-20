#include<bits/stdc++.h>



using namespace std;

typedef long long LL;
typedef vector <int> VI;
typedef pair< int ,int > PII;

int main() {
	int r,g,b;
	cin>>r>>g>>b;
	
	long long ans=(r-b)*g;
    
    cout<<ans;
    return 0;
}
