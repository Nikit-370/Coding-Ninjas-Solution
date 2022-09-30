import java.util.Scanner;
class Solution { 
    public static void printDivisor(int n){
       for(int i=1;i<=n;i++) if(n%i==0) System.out.print(i+ " ");
     }
 
    public static void main(String args[]) {
     Solution obj = new Solution();
     Scanner sc =  new Scanner(System.in);
     int n = sc.nextInt();
     obj.printDivisor(n);
    }
}