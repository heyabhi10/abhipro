public class Employee
		
		{
			public String name;
 			private double salary;
			public Employee (String empName)
				
				{
					name = empName;
				}
			public void setSalary(double empSal)

				{
					salary = empSal;
				}

			public void printEmp()

				{
					System.out.println("name: "+name);
					System.out.println("salary: "+salary);
				}
			public static void main(String args[])

				{
					Employee empone = new Employee("MANISH");
					empone.setSalary(70000);
             				empone.printEmp();

                                        Employee emptwo = new Employee("ABHI");
                                        emptwo.setSalary(60000);
                                        emptwo.printEmp();
                                }

		}	       
