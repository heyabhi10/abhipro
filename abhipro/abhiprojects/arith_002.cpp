//arithematic program in c++ ..
//abhishek chavan

#include<iostream>   //iostream is used for input output oprations
using namespace std; 



int main()
{
		int a=10;
		int b=20;
		int c=0;  //set as 0 to avoid garbage value

		c=a+b;
		cout<<"addition of two numbers are="<<c<<endl;     //a+b=30
							           //two  oprator are used here +,=
								   // where as c,a,b are oprands


		c=a-b;
                cout<<"substraciton of two numbers are="<<c<<endl;   //a-b=-10


		c=a*b;
                cout<<"multiplication of two numbers are="<<c<<endl; //a*b=200


		c=a/b;
                cout<<"division of two numbers="<<c<<endl;  //a/b=0


		c=a%b;
                cout<<"modulus of two numbers are="<<c<<endl; //a%b=10

		c=a++;
                cout<<"first postincrement ="<<c<<endl;  //10

		c=a++;
		cout<<"second postincrement "<<c<<endl; //11

		c=a--;
                cout<<"first postdecrement ="<<c<<endl; //12

		c=a--;
                cout<<"second  postdecrement ="<<c<<endl; //11

		c=++a;
                cout<<"first preincrement ="<<c<<endl; //11

	        c=++a;
                cout<<"second preincrement ="<<c<<endl;  //12


		c=--a;
                cout<<"first predecrement"<<c<<endl;  //11

		 c=--a;
                cout<<"second predecrement"<<c<<endl;  //10

 return 0;
}
