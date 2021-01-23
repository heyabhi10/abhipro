


		abstract class Pets

				{

					public abstract void sound();
				}

		public class Dog extends Pets

				{


					public void sound()


						{

							System.out.println("Woof");
						}

					public static void main(String args[])


						{				
							Pets obj = new Dog();
							obj.sound();

						}

				}
