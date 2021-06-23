#include<iostream>
using namespace std;
int hcf(int a,int b)// hcf(highest common factor) is also known as gcd(greatest common factor).
{
	while(b!=0)
	{
		int rem=a%b;
		a=b;
		b=rem;
	}
	return a;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<hcf(a,b);
}

