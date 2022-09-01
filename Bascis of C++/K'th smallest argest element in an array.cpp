#include <iostream>
#include<algorithm>
using namespace std;

void kthSmallestLargest(int arr[], int n, int k) {
  for(int i=0;i<n-1;i++){       
       for(int j=i+1;j<n;j++){
           if(arr[j]<arr[i])
               swap(arr[i],arr[j]);
       }
  }

    int small = -1;
    int large = -1;
    int indx = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < arr[i+1])
            indx+=1;
        if(indx == k-1) 
        {
            small = i+1;  
            break;
        }
    }
    
    int indxx = 0;
    for(int i= n-1 ;i>=0;i--) 
    {
        if(arr[i]> arr[i-1])
            indxx+=1;
        if(indxx==k-1)
        {
            large=i-1;
            break;
        }
    }
     if(large==-1)
     cout<<"-1"<<" ";
   else
       cout<<arr[large]<<" ";
   if(small==-1)
       cout<<"-1";
   else
      cout<<arr[small];
   cout<<endl; 
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
        t--;
    }
    return 0;
}