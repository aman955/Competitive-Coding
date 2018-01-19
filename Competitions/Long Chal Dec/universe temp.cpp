#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
ll minimum(ll a,ll b,ll c){
    if(a<=b&&a<=c){
        return a;
    }else if(b<=a&&b<=c){
        return b;
    }
    return c;
}
 
ll cost[101][101][101];
 
ll yeah2(ll x,ll y,ll z,ll a,ll b,ll c){
    if(x<0||y<0||z<0)
        return INT_MAX;
    else if(x==0&&y==0&&z==0){
        return 0;
    }
        else if(cost[x][y][z]!=0){
        return cost[x][y][z];
    }
    else {
        return
             cost[x][y][z] = minimum(
                        minimum(yeah2(x-1,y,z,a,b,c),yeah2(x,y-1,z,a,b,c),yeah2(x,y,z-1,a,b,c))+a,
                        minimum(yeah2(x-1,y-1,z,a,b,c),yeah2(x,y-1,z-1,a,b,c),yeah2(x-1,y,z-1,a,b,c))+b,
                        yeah2(x-1,y-1,z-1,a,b,c)+c
                );
    }
}
 
ll yeah(ll x,ll y,ll z,ll a,ll b,ll c){
    if(x<0||y<0||z<0)
        return INT_MAX;
    else if(x==0&&y==0&&z==0){
        return 0;
    }
    else {
        return
               minimum(
               minimum(yeah(x-1,y,z,a,b,c),yeah(x,y-1,z,a,b,c),yeah(x,y,z-1,a,b,c))+a,
               minimum(yeah(x-1,y-1,z,a,b,c),yeah(x,y-1,z-1,a,b,c),yeah(x-1,y,z-1,a,b,c))+b,
               yeah(x-1,y-1,z-1,a,b,c)+c
               );
    }
}
 
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        for(ll j=0;j<101;j++){
         for(ll k=0;k<101;k++){
         for(ll l=0;l<101;l++){
            cost[j][k][l]=0;
        }   
        }   
        }
        ll x,y,z,a,b,c;
        cin>>x>>y>>z>>a>>b>>c;
        cout<<yeah2(x,y,z,a,b,c)<<endl;
    }
} 
