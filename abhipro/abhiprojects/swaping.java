class Swap

	{ 
		public static int a=15;
		public static int b=20;
		public static void main(String args[])



			{

				System.out.println("value of a before swaping"+a);
				System.out.println("value of b before swaping"+b);

				swap(a,b);

				System.out.println("value of a after swaping"+a);
                                System.out.println("value of b after swaping"+b);
			}

	      static int  swap(int x,int y)

			{

				int temp;
				temp=x;
			        x=y;
			        y=temp;

				a=x;
				b=y;


			return temp;
		      }
	}
