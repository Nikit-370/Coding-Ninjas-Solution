import java.util.Scanner;
class Solution {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
           int a=sc.nextInt();
           int b=sc.nextInt();
           int pow=1;
           for(int i=1 ; i<=b ; i++)
           {
               pow=pow*a;
           }
           System.out.println(pow);
    }
}