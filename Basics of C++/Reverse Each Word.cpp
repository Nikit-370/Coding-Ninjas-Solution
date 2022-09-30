#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string reverseEachWord(string input) {    
    string ans , a="";
    input +=" ";
    for(int i=0; i<input.size(); i++){
        if(input[i]!=' ')
            a+=input[i];
        else {
            for (int i = a.length()-1; i >= 0; i--)
                ans += a[i];
            a = "";
            ans +=" ";
        }
    }  
    return ans;
}

int main() {
   string str;
    getline(cin, str);  
    string ans = reverseEachWord(str);  
    cout <<ans<<endl;  
}