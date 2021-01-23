class Switch
{
	public static void main(String args[])
	{
		int a=10;
		int b=20;
		int c=0;

		char ch;
		ch=3;

		System.out.println("A="+ a);
	 	System.out.println("B="+ b);
		System.out.println("C="+c);

		switch(ch)
		{
			case 1:
				c=a+b;
			 	System.out.println("Addition="+ c);
				break;
			case 2:
                                c=a-b;
                                System.out.println("Subtraction="+ c);
				break;
			case 3:
                                c=a*b;
                                System.out.println("Multiplication="+ c);
				break;
			case 4:
                                c=a/b;
                                System.out.println("Division="+ c);
				break;
			default :
				System.out.println("Thank you");
		}
	}
}
