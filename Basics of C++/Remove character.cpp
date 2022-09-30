#include <iostream>
#include <cstring>
using namespace std;

string removeAllOccurrencesOfChar(string input, char c) {
  string word="";
    int size = input.length();
    for (int i=0;i< size;i++)
    {
        if(input[i]!= c)
        {
            word+=input[i];
        }
    }
return word;
}

int main() {
    string input;
    char c;
    cin >> input >> c;
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;
    return 0;
}