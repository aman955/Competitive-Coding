#include <bits/stdc++.h>
using namespace std;
int seg[400005],lazy[400005];

void resolve(int i,int n)
{
    if(n!=1){
	lazy[2*i]+=lazy[i];
	lazy[2*i+1]+=lazy[i];
    }
	seg[i]=lazy[i]%2?n-seg[i]:seg[i];
	lazy[i]=0;
}
void print(){
	cout<<"print";
	for(int i=0;i<8;i++){
		cout<<seg[i]<<'\t'<<lazy[i]<<'\n';
	}
}
void update(int n,int s,int e,int us,int ue){
	//cout<<"u "<<n<<" "<<s<<" "<<e<<'\n';
	resolve(n,e-s+1);
	if(s>ue || e<us )
		return;
	if(us<=s && e<=ue){
        seg[n]=e-s+1-seg[n];
        if(s!=e){
        lazy[2*n]+=1;
        lazy[2*n+1]+=1;
        }
        return;
	}
	int mid = (s+e)>>1;
	//cout<<"mid"<<mid;
	update(2*n,s,mid,us,ue);
	update(2*n+1,mid+1,e,us,ue);
	seg[n]=seg[n*2]+seg[2*n+1];
 
}
int query(int n,int s,int e,int us,int ue){
	//cout<<"q";
	resolve(n,e-s+1);
	if(s>ue || e<us )
		return 0;
	if(us<=s && e<=ue)
	return seg[n];
	int mid = (s+e)>>1;
	//cout<<"mid"<<mid;
	return query(2*n,s,mid,us,ue)+
	query(2*n+1,mid+1,e,us,ue);
}
int main() {
	// your code goes here
	int n,q,t,a,b;
	memset(seg,0,sizeof(seg));
	memset(lazy,0,sizeof(lazy));
	cin>>n>>q;
	for(int i=0;i<q;i++){
		//cout<<"l";
		cin>>t>>a>>b;
		//cout<<"i";
		if(t==1)cout<<query(1,0,n-1,a,b)<<"\n";
		else update(1,0,n-1,a,b);
		//print();
	}
	return 0;
}
