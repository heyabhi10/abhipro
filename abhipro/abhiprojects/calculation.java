class Calculation
	{
		int z;
		public void addition(int x, int y)

			{
				z = x+y;
				System.out.println("The sum of the given numbers:"+z);
			}
		public void Substraction(int x,int y)

			{
				z = x-y;
                                System.out.println("The difference of the given numbers:"+z);
			}
	}


public class calculation extends Calculation

			{
				public void multiplication(int x, int y)

					{
						z = x*y;
                                                System.out.println("The product of the given numbers:"+z);
					}
		public static void main(String args[])

					{
						int a = 20, b = 10;
					        calculation demo = new calculation();
						demo.addition(a, b);
						demo.Substraction(a, b);
						demo.multiplication(a, b);
					}
			}
