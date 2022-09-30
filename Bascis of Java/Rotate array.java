import java.util.* ;
import java.io.*; 
class Solution {
    public static void main(String args[]) 
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++) arr[i]=sc.nextInt();
        int m=sc.nextInt();
        int[] a1=new int[n];
        int  p=0;
        int q=(arr.length)-m;
        for(int i=0;i<m;i++)
        {
           a1[q]=arr[i];
           q++;
        }
        for(int i=m;i<arr.length;i++)
        {
           a1[p]=arr[i];
           p++;
        } for(int i=0;i<arr.length;i++)
        {   
           System.out.print(a1[i]+" ");
        }
    }
}