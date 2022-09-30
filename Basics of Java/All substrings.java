import java.util.Scanner;
class Solution {
   static void printSubstrings(String input) {
       int n = input.length();
       for(int i = 0 ; i < n ; i++){
           String sub = "";
           for(int j = i; j < n ; j++){
               sub += input.charAt(j);
               System.out.println(sub);
           }
       }
   }
   
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        printSubstrings(input);
    }
}