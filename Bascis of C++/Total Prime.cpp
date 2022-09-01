#include <iostream>
using namespace std;

int totalPrime(int a,int b)
{
	int c,i,d=0;
	for(c=a;c<=b;c++)
	{for(i=2;i<=c;i++)
	if(c%i==0)
	break;
	if(i==c){
	  ++d;}
	}
   return(d);
}

int main() {
   int S,E;
   cin>>S>>E;
   cout << totalPrime(S, E);
   return 0;
}