#include <iostream>
using namespace std;

int main() {
int n,x,j;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   cin>>x;
   for( j=0;j<n;j++)
   {
       if(arr[j]==x){
           cout<<j<<endl;
           break;  
       }
   }
   if(j==n) cout<<-1;
   return 0;
}