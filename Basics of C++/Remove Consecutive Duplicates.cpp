#include <iostream>
#include <cstring>
using namespace std;

string removeConsecutiveDuplicates(string input)
{
    string str="";
    for(int i=0;i<input.size();i++){
        if(input[i+1]!=input[i])
            str=str+input[i];
    }
    return str;
}

int main()
{
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}