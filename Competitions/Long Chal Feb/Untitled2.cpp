#include <bits/stdc++.h>
#define cpx complex<double>
#define pi 3.14159265359
using namespace std;
vector<cpx> FFT(vector<int> vc){
	int n=vc.size();
	if(n==1){
		vector<cpx> tmp;
		tmp.push_back(cpx(1.0*vc[0],0.0));
		return tmp;
	}
	int half=n/2;
	vector<int> v0,v1;
	for(int i=0;i<half;i++){
		v0.push_back(vc[i<<1]);
		v1.push_back(vc[i<<1^1]);
	}
	vector<cpx> Y0=FFT(v0),Y1=FFT(v1),foo(n);
	cpx w(1,0),wn(cos(2*pi/n),sin(2*pi/n));
	for(int i=0;i<half;i++){
		foo[i]=Y0[i]+w*Y1[i];
		foo[i+half]=Y0[i]-w*Y1[i];
		w*=wn;
	}
	return foo;
}
vector<cpx> iFFT(vector<cpx> vc){
	int n=vc.size();
	if(n==1){
		return vc;
	}
	int half=n/2;
	vector<cpx> v0,v1;
	for(int i=0;i<half;i++){
		v0.push_back(vc[i<<1]);
		v1.push_back(vc[i<<1^1]);
	}
	vector<cpx> Y0=iFFT(v0),Y1=iFFT(v1),foo(n);
	cpx w(1,0),wn(cos(2*pi/n),sin(-2*pi/n));
	for(int i=0;i<half;i++){
		foo[i]=Y0[i]+w*Y1[i];
		foo[i+half]=Y0[i]-w*Y1[i];
		w*=wn;
	}
	return foo;
}
vector<cpx> comMul(vector<cpx> c1,vector<cpx> c2){
	int n1=c1.size(),n2=c2.size(),mx,mn;
	mx=max(n1,n2);
	mn=min(n1,n2);
	vector<cpx> res;
	for(int i=0;i<mn;i++) res.push_back(c1[i]*c2[i]);
	for(;mn<mx;mn++) res.push_back(cpx(0,0));
	return res;
}
int main() 
{
	int ch=1,m=2,k=2,n;
	int power=1,x;
	vector<cpx> coef;
	vector<int> coef2;
	cin>>x;
	while(x!=power)
	{
		power++;
	vector<int> coef1;
	int tmp;
	n=1;
		
	n++;

	coef1.push_back(1);
	coef1.push_back(k);
	k++;

	tmp=1;
	
	while(tmp<=n) 
	tmp<<=1;
	for(int i=n;i<tmp;i++)
	 coef1.push_back(0);
	 
	tmp<<=1;
	for(int i=tmp>>1;i<tmp;i++) coef1.push_back(0);
	
	
	if(ch==1)
	{
	coef2.push_back(1);
	coef2.push_back(1);
	ch++;
    }
  
	tmp=1;
	
	while(tmp<=m) tmp<<=1;
	
	for(int i=m;i<tmp;i++) coef2.push_back(0);
	tmp<<=1;
	
	for(int i=tmp>>1;i<tmp;i++) coef2.push_back(0);
	coef=iFFT(comMul(FFT(coef1),FFT(coef2)));
	
	coef2.erase(coef2.begin(),coef2.end());
	
	for(int i=0;i<(n+m-1);i++)
	{
		int y=round(real(coef[i]));
		coef2.push_back(y);
		
	}
	coef.erase(coef.begin(),coef.end());
	for(int i=0;i<(n+m-1);i++)	
	cout<<coef2[i]<<" ";	
	
	m=n+m-2;
		
	}
								 // two polunomials 
}
