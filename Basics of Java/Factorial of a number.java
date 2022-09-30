import java.util.*;
class Solution {

public static void main(String args[]) {
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();  
       int fact=1;        
       
       if(n==0) System.out.println("1");
       else if(n<0) System.out.println("Error");
       else{
           for(int i=n;i>0;i--) fact=fact*i;
           System.out.println(fact);
       }
    }
}