#include<iostream>
#include<string>
using namespace std;
int main()
{ int *x,y=5;
x=&y;
cout<<*(&(*(&(*x))));
}
