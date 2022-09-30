import java.util.* ;
import java.io.*; 
public class Solution {
    public static int countSetBits(int n) {
       int count = 0;
       String s = Integer.toBinaryString(n);
       for (int i=0; i<s.length(); i++) if (s.charAt(i)=='1') count++; else continue;       
       return count;
    }
}