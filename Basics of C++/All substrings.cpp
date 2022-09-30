#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input) {
   int n = input.size() ;
   for ( int i = 0 ; i < n ; i++ ) {
       string sub = "" ;
       for ( int j = i ; j < n ; j++ ) {
           sub += input[j] ;
           cout << sub << endl ; 
       }
   }
}

int main() {
   string input;
   getline(cin, input);
   printSubstrings(input);
   return 0;
}