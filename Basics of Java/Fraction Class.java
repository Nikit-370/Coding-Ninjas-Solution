import java.util.Scanner;
class Fraction {
    int num,deno;
    public Fraction(int n,int d){
    this.num = n;
    this.deno = d;
   }
    
   public void simplify(){
       int gcd = Calculategcd(num,deno);
       num/=gcd;
       deno/=gcd;
   }
    
   public void add(Fraction f){
       int lcm = deno*f.deno;
       int nu = lcm/deno;
       int de = lcm/f.deno;
       int n = nu*num+(de*f.num);
       num =n;
       deno = lcm;
       simplify();
   }
    
   public void mult(Fraction f){
       num = num*f.num;
       deno = deno*f.deno;
       simplify();
   }
    
   public void print(){
       System.out.println(num+"/"+deno);
   }

   static int Calculategcd(int a, int b){
    if (a == 0) return b;
       return Calculategcd(b%a, a);
}
}

class Solution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int d1 = sc.nextInt();
        Fraction f1 = new Fraction(n1,d1);
        int queries = sc.nextInt();
        for(int i=0;i<queries;i++){
           int choice = sc.nextInt();
           int n2 = sc.nextInt();
           int d2 = sc.nextInt();
           Fraction f2 = new Fraction(n2,d2);
           if(choice == 1){
               f1.add(f2);
               f1.print();
           }
            else{
               f1.mult(f2);
               f1.print();
           }
       }
    }
}