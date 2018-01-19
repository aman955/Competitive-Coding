#include<iostream>
using namespace std;

int main()
{
	int i;
	int arr[25]={};
	for(i=1;i<=24;i++)
	cin>>arr[i];
	
	
	int temp1=arr[21];
	int temp2=arr[22];
	int temp3=arr[23];
	int temp4=arr[24];
	
	arr[21]=temp2;
	arr[22]=temp1;
	arr[23]=temp4;
	arr[24]=temp3;
	
	if(arr[1]==arr[2]&&arr[3]==arr[4]&&arr[2]==arr[3]&&arr[10]==arr[9]&&arr[11]==arr[12]&&arr[10]==arr[12]&&arr[5]==arr[6]&&arr[19]==arr[20]&&arr[5]==arr[20]&&arr[17]==arr[18]&&arr[23]==arr[24]&&arr[17]==arr[23]&&arr[13]==arr[14]&&arr[7]==arr[8]&&arr[7]==arr[13]&&arr[21]==arr[22]&&arr[15]==arr[16]&&arr[15]==arr[21])
	{
		cout<<"YES"<<endl;
		return 0;
	}
	
		if(arr[1]==arr[2]&&arr[3]==arr[4]&&arr[2]==arr[3]&&arr[10]==arr[9]&&arr[11]==arr[12]&&arr[10]==arr[12]&&arr[5]==arr[6]&&arr[15]==arr[16]&&arr[5]==arr[15]&&arr[17]==arr[18]&&arr[7]==arr[8]&&arr[17]==arr[7]&&arr[21]==arr[22]&&arr[20]==arr[19]&&arr[21]==arr[20]&&arr[13]==arr[14]&&arr[23]==arr[24]&&arr[13]==arr[23])
	{
		cout<<"YES"<<endl;
		return 0;
	}
	
		if(arr[13]==arr[14]&&arr[15]==arr[16]&&arr[13]==arr[15]&&arr[17]==arr[18]&&arr[19]==arr[20]&&arr[17]==arr[19]&&arr[2]==arr[4]&&arr[5]==arr[7]&&arr[2]==arr[5]&&arr[6]==arr[8]&&arr[9]==arr[11]&&arr[8]==arr[9]&&arr[1]==arr[3]&&arr[22]==arr[24]&&arr[1]==arr[22]&&arr[21]==arr[23]&&arr[10]==arr[12]&&arr[21]==arr[10])
	{
		cout<<"YES"<<endl;
		return 0;
	}
	
			if(arr[13]==arr[14]&&arr[15]==arr[16]&&arr[13]==arr[15]&&arr[17]==arr[18]&&arr[19]==arr[20]&&arr[17]==arr[19]&&arr[1]==arr[3]&&arr[6]==arr[8]&&arr[1]==arr[8]&&arr[5]==arr[7]&&arr[10]==arr[12]&&arr[5]==arr[12]&&arr[9]==arr[11]&&arr[22]==arr[24]&&arr[9]==arr[24]&&arr[2]==arr[4]&&arr[21]==arr[23]&&arr[2]==arr[21])
	{
		cout<<"YES"<<endl;
		return 0;
	}
	
		if(arr[5]==arr[6]&&arr[7]==arr[8]&&arr[5]==arr[7]&&arr[21]==arr[22]&&arr[23]==arr[24]&&arr[21]==arr[23]&&arr[3]==arr[4]&&arr[13]==arr[15]&&arr[3]==arr[13]&&arr[9]==arr[10]&&arr[18]==arr[20]&&arr[9]==arr[18]&&arr[11]==arr[12]&&arr[14]==arr[16]&&arr[11]==arr[16]&&arr[1]==arr[2]&&arr[17]==arr[19]&&arr[1]==arr[17])
	{
		cout<<"YES"<<endl;
		return 0;
	}
	
		if(arr[5]==arr[6]&&arr[7]==arr[8]&&arr[5]==arr[7]&&arr[21]==arr[22]&&arr[23]==arr[24]&&arr[21]==arr[23]&&arr[3]==arr[4]&&arr[18]==arr[20]&&arr[3]==arr[20]&&arr[13]==arr[15]&&arr[9]==arr[10]&&arr[9]==arr[13]&&arr[1]==arr[2]&&arr[14]==arr[16]&&arr[1]==arr[14]&&arr[11]==arr[12]&&arr[17]==arr[19]&&arr[11]==arr[17])
	{
		cout<<"YES"<<endl;
		return 0;
	}
	
cout<<"NO"<<endl;
	
	
	
	
	
}
