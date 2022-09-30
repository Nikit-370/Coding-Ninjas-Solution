import java.util.Scanner;
class Solution {
    static String reverseStringWordWise(String input) {
       String [] wo=input.split(" ");
        String rev="";
        for(int i=0;i<wo.length;i++){
            String word=wo[i];
            String revword="";
            for (int j=word.length()-1;j>=0;j--){
                revword=revword+word.charAt(j);
            }
            rev=rev+revword+" ";
        }
        return rev;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        String ans = reverseStringWordWise(input);
        System.out.println(ans);
    }
}