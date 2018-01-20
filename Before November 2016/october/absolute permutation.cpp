#include<iostream>
#include<vector>
using namespace std;

int main()
{
long t,n,k,dev;
cin >> t;

for(int a0 = 0; a0 < t; a0++){
cin >> n >> k;
dev=n/k;
vector<long> pos(n);
if(k==0){
          for(long i=1;i<=n;i++)cout<<i<<" ";
}

else if 
           ((k<=n/2)&&(n%k==0)&&(dev%2 ==0)){
          for(long i=0;i<n;i++){
                   if((i/k)%2 == 0){
                           pos[i] = i+k+1;
                   }
                  else{
                        pos[i] = i-k+1;
                    }
               }
           for (long i = 0; i< n; i++)
                    cout << pos[i] <<" ";
    }
else   cout << "-1";
cout <<endl;
}
return 0;
}
