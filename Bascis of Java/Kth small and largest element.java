import java.util.*;
public class Solution 
{
    public static ArrayList<Integer> kthSmallLarge(ArrayList<Integer> arr, int n, int k)
     {

         Collections.sort(arr);
         ArrayList<Integer> cars = new ArrayList<Integer>();
         cars.add(arr.get(k-1));
         cars.add(arr.get(n-k));
         return cars;
    }
}