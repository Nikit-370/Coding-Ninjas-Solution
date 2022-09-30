import java.util.Scanner;
class Solution {

    public static void main(String args[]) {
       Scanner sc=new Scanner(System.in);
       int s=sc.nextInt();
       int e=sc.nextInt();
       int w=sc.nextInt();
       for(int i=s ; i<=e ; i+=w)
        {
           int cel=(i-32)*5/9;
           System.out.println(i+" "+cel);
        }      
      }
}