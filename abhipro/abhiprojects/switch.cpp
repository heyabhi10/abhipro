#include<iostream>
using namespace std;
int main()
{

	int x=10;
	int y=20;
	int z=0;

	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;

	char ch;
        ch=2;


	switch(ch)
	{
		case 1: z=x+y;
         		cout<<"addition of x+y is:"<<z<<endl;
	        	break;

		case 2: z=x-y;
			cout<<"substraction of x-y is"<<z<<endl;
			break;

		case 3: z=x%y;
                        cout<<"division of x-y is"<<z<<endl;
                        break;

		case 4: z=x*y;
                        cout<<"multiplication of x-y is"<<z<<endl;
                        break;
		default :
			cout<<"thank you"<<endl;

	}
	return 0;
}

