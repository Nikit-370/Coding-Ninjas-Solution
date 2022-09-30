#include <iostream>
using namespace std;

int countBits(int n){
    int count=0,rem=0;
    while(n){
        rem=n%2;
        if(rem==1) count++;
        n=n/2;
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}