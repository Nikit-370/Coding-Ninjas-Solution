import java.util.*;
class Solution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int r, even=0, odd=0;
        while(n>0){
            r = n%10;
            even += (r%2==0 ? r: 0);
            odd += (r%2==1 ? r: 0);
            n /=10;
        }
        System.out.println(even +" "+ odd);
    }
}