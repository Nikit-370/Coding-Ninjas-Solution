#include<bits/stdc++.h>
using namespace std;

int main() {
   int S,E,N;
   cin>>S>>E>>N;
   float Celsius;
   for(int i=S;i<=E;i+=N){
       Celsius = ((i-32)*5)/9;
       cout<<i<<"\t"<<floor(Celsius)<<endl;
   }
   return 0;
}