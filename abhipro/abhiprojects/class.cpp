//abhishek chavan
// class 

#include<iostream>
using namespace std;


class Box

	{
		public:
			double height;
			double length;
			double breadth;

	};

int main()

	{

		Box Box1;
		Box Box2;
		double volume=0.0;

		Box1.height=5;
		Box1.length=7;
		Box1.breadth=9;

		Box2.height=6;
		Box2.length=8;
		Box2.breadth=10;

		volume=Box1.height*Box1.length*Box1.breadth;
		cout<<"Box1:"<<volume<<endl;

		volume=Box2.height*Box2.length*Box2.breadth;
		cout<<"Box2:"<<volume<<endl;

		return 0;
 	}



