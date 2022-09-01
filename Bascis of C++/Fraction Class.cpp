#include<iostream>
#include<algorithm>
using namespace std;

class Fraction {
   int Num,Den;
   public:
   Fraction(int num,int den){
       Num=num;
       Den=den;
   }
   void add(Fraction a2){
       Num=(Num*a2.Den)+(a2.Num*Den);
       Den=(Den*a2.Den);
       int gcd=__gcd(Num,Den);
       Num=Num/gcd;
       Den=Den/gcd;    
   }
   void mult(Fraction a2){
       Den=Den*a2.Den;
       Num=(Num*(a2.Num));
       int gcd=__gcd(Num,Den);
       Num/=gcd;
       Den/=gcd;        
   }
   void print(){
       cout<<Num<<"/"<<Den<<endl;
   }
};

int main() {
   int num1,den1;
   cin>>num1>>den1;
   Fraction a1(num1,den1);
   int choice,t,i;
   cin>>t;  
   for(i=0;i<t;i++){
       cin>>choice;
       int num2,den2;
    cin>>num2>>den2;
       Fraction a2(num2,den2);
    if(choice==1){
           a1.add(a2);
           a1.print();
       }
       if(choice==2){
           a1.mult(a2);
           a1.print();
       }
   }
   return 0;
}