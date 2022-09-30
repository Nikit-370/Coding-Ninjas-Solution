import java.util.*;
class Solution {

public static void main(String args[]) {
       Scanner sc = new Scanner(System.in);
       int n = sc.nextInt();
       int arr[] = new int[n];
       for (int i = 0; i < n; i++) {
           arr[i] = sc.nextInt();
       }    
       int x = sc.nextInt();
       search_method(arr , n , x );        
}
   
    static void search_method(int arr[] , int n , int x){
       int first = -1;
        for(int i = n-1 ; i>=0 ; i--){
            if(arr[i] == x){
                first = i;
                break;
            }
        }    
        System.out.println(first);
    }
}