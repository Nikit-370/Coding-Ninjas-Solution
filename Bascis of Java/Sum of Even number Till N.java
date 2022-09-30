public class Solution {
    public static long evenSumTillN(int n) {
       long sum = 0 ;
       for(int i = 2 ; i <= n; i++){
           if(i%2==0){
               sum = sum + i;
           }
       }    
       return sum;
    }
}