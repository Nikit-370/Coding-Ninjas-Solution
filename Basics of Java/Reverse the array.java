import java.util.* ;
import java.io.*; 
import java.util.ArrayList;
public class Solution 
{
   public static void reverseArray(ArrayList<Integer> a, int m)
   {
       int s=m+1;
       int e=a.size()-1;
       while(s<=e) {
           int temp=a.get(s);
           a.set(s,a.get(e));
           a.set(e,temp);
           s++;
           e--;
       }
    }
}