import java.util.Scanner;
class Person {
     private String name;
     private int age;
     void setValue(String name){
        this.name = name;
    }
    
    void setValue(int age){
        this.age = age;
    }
    
    void getValue(){
        System.out.println("The name of the person is " + this.name + " and the age is " + this.age +".");    
    }
}   
class Solution {
    public static void main(String args[]) {
        Person p = new Person();
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        int age = sc.nextInt();
        p.setValue(name);
        p.setValue(age);
        p.getValue();
    }
}