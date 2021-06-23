#include<iostream>
using namespace std;
int isdivisible(int a, int b, int n)
{
	int c1=n/a;
	int c2=n/b;
	int c3=n/(a*b);
	
	return c1+c2-c3;
}



int main()
{
	cout<<isdivisible(5,7,40);
}
