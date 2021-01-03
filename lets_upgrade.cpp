#include<iostream>
using namespace std;
int main()
{
	int n,i,a[10],m=1;
	cout<<"enter total no of numbers:";
	cin>>n;
	cout<<"enter values";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		m=m*a[i];
	}
	cout<<m;
	return 0;
}
