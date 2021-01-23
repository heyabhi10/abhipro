 2
 3
 4                 abstract class Animal
 5
 6                                 {
 7
 8                                         public abstract void sound();
 9                                 }
10
11                 public class Dog extends Animal
12
13                                 {
14
15
16                                         public void sound()
17
18
19                                                 {
20
21                                                         System.out.println("Woof");
22                                                 }
23
24                                         public static void main(String args[]);
25                                         Animal obj = new Dog();
26                                         obj.sound();
27
28                                 }
29



