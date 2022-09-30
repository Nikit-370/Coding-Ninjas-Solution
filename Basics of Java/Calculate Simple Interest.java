import java.util.* ;
import java.io.*; 
class Solution {
    public static void main(String args[]) {       
        int principle, timeperiod;
        float roi;
        Scanner sc = new Scanner(System.in);
        principle = sc.nextInt();
        roi = sc.nextFloat();
        timeperiod = sc.nextInt();
        int interest = (int)(principle*roi*timeperiod)/100;
        System.out.println(interest);
    }
}