import java.util.Scanner;
class ComplexNumbers {
    int r,i;
    ComplexNumbers(){
    }
    ComplexNumbers(int r,int i){
        this.r = r;
        this.i = i;
    }
    void Plus(ComplexNumbers c1,ComplexNumbers c2){
        this.r = c1.r+c2.r;
        this.i = c1.i+c2.i;
    }
    void Multiply(ComplexNumbers c1, ComplexNumbers c2){
        this.r = (c1.r *c2.r)-(c1.i *c2.i);
        this.i = (c1.r*c2.i)+(c2.r*c1.i);
    }
    void Print(){
        System.out.println(this.r+" + "+"i"+this.i);
    }
}

class Solution {
    public static void main(String args[]) {
        int r1,i1,r2,i2;
        Scanner sc = new Scanner(System.in);
        r1 = sc.nextInt();
        i1 = sc.nextInt();
        r2 = sc.nextInt();
        i2 = sc.nextInt();
        int choice = sc.nextInt();
        ComplexNumbers c1 = new ComplexNumbers(r1,i1);
        ComplexNumbers c2 = new ComplexNumbers(r2,i2);
        ComplexNumbers c3 = new ComplexNumbers();
        if(choice ==1){
            c3.Plus(c1,c2);
            c3.Print();
        }
        else if(choice ==2){
            c3.Multiply(c1,c2);
            c3.Print();
        }
    }
}