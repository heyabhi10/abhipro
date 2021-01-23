#include<iostream>
using namespace std;

int main()
{
	int x=10;
	int y=25;

	(x&y);
	cout<<"bitwise (x&y)="<<(x&y)<<endl;

	(x|y);
	cout<<"bitwise (x|y)="<<(x&y)<<endl;

	(x^y);
	cout<<"bitwise (x^y)="<<(x&y)<<endl;

	(~x);
	cout<<"bitwise (~x)="<<(~x)<<endl;
	
	(x<<y);
	cout<<"bitwise (x<<y)="<<(x<<y)<<endl;

	(x>>y);
	cout<<"bitwise (x>>y)="<<(x>>y)<<endl;

	return 0;
}
