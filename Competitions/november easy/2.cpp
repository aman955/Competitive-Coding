#include<iostream>
using namespace std;

int arr[10000][10000]={};

int main()
{
	arr[9999][9999]=55;
	cout<<arr[9999][9999];
}
