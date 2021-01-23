#include<iostream>
using namespace std;

	
int main()
{
      	int a=15;
	int b=16;

	cout<<"value of a before swaping"<<a<<endl;
	cout<<"value of b before swaping"<<b<<endl;

	swap(a,b);

	cout<<"value of a after swaping"<<a<<endl;
        cout<<"value of b after swaping"<<b<<endl;

}
int swap (int x, int y)
 		{

		  int temp;
		  temp=x;
		  x=y;
		  y=temp;
		}
    
