#include <iostream>
#include <unordered_map>
#include <cmath>
#define ll long int
#define um unordered_map<ll,ll>
using namespace std;
void one(ll i, ll w, ll n, ll sq, um *m, ll *lazy, ll *b, ll nm)
{
    ll j=(nm-1)*sq,l=nm-1;
    while(i<=j){
        lazy[l]^=w;
        if(i==j)
            return;
        j-=sq;
        l--;
    }
    for(j=i;j<(l+1)*sq && j<n;j++){
        m[l][b[i]]--;
        b[i]^=w;
        m[l][b[i]]++;
    }
 
}
void two(ll i, ll k, ll n, ll sq, um *m, ll *lazy, ll *b){
    ll ans=0,j=sq-1,l=0;
    while(i>=j){
        ans=ans+m[l][k^lazy[l]];
        if(i==j){
            cout<<ans<<endl;
            return;
        }
        j=min(j+sq,n-1);
        l++;
    }
    ll tyu=k^lazy[l];
    j-=sq; j++;
    for(;j<=i;j++){
        if(b[j]==tyu)
            ans++;
    }
    cout<<ans<<endl;
}
int main(){
    ll n,q;
    cin>>n>>q;
    ll sq=sqrt(n);
    ll nm=ceil(double(n)/sq);   
    um *m=new um[nm];
    ll *lazy=new ll[nm];
    for(ll i=0;i<nm;i++)
        lazy[i]=0;
 
    ll *a=new ll[n];
    ll *b=new ll[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(i==0)
            b[i]=a[i];
        else
            b[i]=b[i-1]^a[i];
        m[i/sq][b[i]]++;
    }
  for(ll j=0;j<q;j++){
        ll ot,i,k;
        cin>>ot>>i>>k;
        i--;
 
        if(ot==1){
            one(i,k^a[i],n,sq,m,lazy,b,nm);
           
        }
        if(ot==2)
            two(i,k,n,sq,m,lazy,b);
 
 
    }
    return 0;
}
