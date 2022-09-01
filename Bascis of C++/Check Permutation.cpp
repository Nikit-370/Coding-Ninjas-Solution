#include <iostream>
#include <cstring>
#include<algorithm>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
   string str1 = input1  ;
   string str2 = input2 ;
       if ( str1.size() != str2.size() )
           return false ; 
   sort ( str1 . begin() , str1.end() ) ;
   sort ( str2.begin() , str2.end() ) ;
   
   for ( int i = 0 ; i < str1.size() ; i++ ) {
       if ( str1[i] != str2[i] ) {
           return false ; 
       }
   }
   return true ; 
}

int main() {
   int size = 1e6;
   char str1[size];
   char str2[size];
   cin >> str1 >> str2;
   cout << (isPermutation(str1, str2) ? "true" : "false");
}