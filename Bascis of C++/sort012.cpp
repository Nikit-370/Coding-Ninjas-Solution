#include <iostream>
using namespace std;

void sort012(int *arr, int n)
{
   int i = 0, j=0,k=n-1;
   while(j<=k){
       if(arr[j]==0){
           swap(arr[i],arr[j]);
           i++;
           j++;
       } else if (arr[j] == 1){
           j++;
       } else {
           swap(arr[j], arr[k]);
           k--;
       }
   }
}
int main() {
    int t;
    cin >> t;

    while (t>0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}