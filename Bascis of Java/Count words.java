import java.util.Scanner;
class Solution {
   static int  countWords(String input) {
       String[] words = input.split(" ",0);
       return words.length;
   }
    
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        int output = countWords(input);
        System.out.println(output);
	}
}
