int Lnumber[1000000];

int fibonacciNumber(int n){
if(n<=1)
return n;
   int x,y;
    
if(Lnumber[n-1]!=0){
      x=Lnumber[n-1]%1000000007;
   }
   else{
       x=fibonacciNumber(n-1);
   }
if(Lnumber[n-2]!=0){
       y=Lnumber[n-2]%1000000007;
   }
   else{
       y=fibonacciNumber(n-2);
   }
return Lnumber[n]=(x+y)%1000000007;
}