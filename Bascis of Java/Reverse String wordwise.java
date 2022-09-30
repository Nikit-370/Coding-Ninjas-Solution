import java.util.Scanner;
class Solution {
   public static String reverse(String str, int start, int end)
   {
       char[] ch = str.toCharArray();
       while(start <= (end-1))
       {
           char temp = ch[start];
           ch[start] = ch[end-1];
           ch[end-1] = temp;
           start++;
           end--;
       }
       return new String(ch);
   }

   static String reverseStringWordWise(String input) {
       input += " ";
       int start = 0, n = input.length(), end;
       for(int i = 0; i < n; i++)
       {
           if(input.charAt(i) == ' ')
           {
               end = i;
            input = reverse(input, start, end);    
               start = i+1;
           }
       }
       end = n-1;
       input = reverse(input, start, end);
       input = reverse(input, 0, n-1);
       return input;
   }

   public static void main(String args[]) {
       Scanner sc = new Scanner(System.in);
       String input = sc.nextLine();
       String ans = reverseStringWordWise(input);
       System.out.println(ans);
   }
}