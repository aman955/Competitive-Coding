#include <stdio.h>
#include<iostream>
using namespace std;
#include <math.h>
#define CMAX 10
#define VMAX 10
int NC, NV, NOPTIMAL,P1,P2,XERR,a,b,c,x,y,z;
double TS[CMAX][VMAX];
long long ans;

void Data()
 {
double R1,R2,r1,r2;
char R;
int I,J;

NV=4;
NC=3;
cin>>a>>b>>c;
cin>>x>>y>>z;
R1 = 1.0;
r1=3*a-c;
r2=2*a-b;
TS[1][2]=r1*R1;
TS[1][3]=r2*R1;
TS[1][4]=r2*R1;
TS[1][5]=r2*R1;

R2=0;
TS[1][1] = R2 * R1;



TS[2][2]=-1;
TS[2][3]=-1;
TS[2][4]=-1;
TS[2][5]=0;
TS[2][1]=x;

TS[3][2]=-1;
TS[3][3]=0;
TS[3][4]=-1;
TS[3][5]=-1;
TS[3][1]=y;

TS[4][2]=-1;
TS[4][3]=-1;
TS[4][4]=0;
TS[4][5]=-1;
TS[4][1]=z;



for(J=1; J<=NV; J++) 
TS[0][J+1] = J;

for(I=NV+1; I<=NV+NC; I++) 
TS[I-NV+1][0] = I;
}

void Pivot();
void Formula();
void Optimize();

void Simplex()
{
e10: Pivot();
Formula();
Optimize();
if (NOPTIMAL == 1) 
goto e10;
}
void Pivot() 
{
double RAP,V,XMAX;
int I,J;
XMAX = 0.0;
for(J=2; J<=NV+1; J++) 
{
if (TS[1][J] > 0.0 && TS[1][J] > XMAX) 
{
XMAX = TS[1][J];
P2 = J;
}
}
RAP = 999999.0;
for (I=2; I<=NC+1; I++) 
{
if (TS[I][P2] >= 0.0) goto e10;
V = fabs(TS[I][1] / TS[I][P2]);
if (V < RAP) 
{
RAP = V;
P1 = I;
}
e10:;
}
V = TS[0][P2]; TS[0][P2] = TS[P1][0]; TS[P1][0] = V;
}

void Formula() 
{;
int I,J;
for (I=1; I<=NC+1; I++) 
{
if (I == P1) 
goto e70;
for (J=1; J<=NV+1; J++) 
{
if (J == P2) goto e60;
TS[I][J] -= TS[P1][J] * TS[I][P2] / TS[P1][P2];
e60:;
}
e70:;
}
TS[P1][P2] = 1.0 / TS[P1][P2];

for (J=1; J<=NV+1; J++) 
{
if (J == P2) goto e100;
TS[P1][J] *= fabs(TS[P1][P2]);
e100:;
}

for (I=1; I<=NC+1; I++) 
{
if (I == P1) goto e110;
TS[I][P2] *= TS[P1][P2];
e110:;
}
}

void Optimize() 
{
int I,J;

for (I=2; I<=NC+1; I++)
if (TS[I][1] < 0.0) XERR = 1;
NOPTIMAL = 0;
if (XERR == 1) 
return;

for (J=2; J<=NV+1; J++)
if (TS[1][J] > 0.0)
 NOPTIMAL = 1;
}
void Results() 
{
ans=TS[1][1];
}

int  main() 
{
Data();
Simplex();
Results();
cout<<ans<<endl;
}
