#include <iostream>
using namespace std;
int main() {
   int n,rem;
   int sumodd=0;
   int sumeven=0;
   cin>>n;
   while(n>0){
       rem= n%10;
       n=n/10;
       if(rem%2==0){
           sumeven+=rem;
       }
       else{
           sumodd+=rem;
       }
       rem= rem/10;
   }
   cout<<sumeven<<" "<<sumodd<<endl;
   return 0;
}