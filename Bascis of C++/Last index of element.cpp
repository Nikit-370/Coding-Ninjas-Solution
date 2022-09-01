#include <iostream>
#include <array>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int i;
    int pos = 0; 

    for (i = 0; i <= n; i++)
    {
        if (arr[i] == x)
        {
            pos = i; 
        }
    }
    if(pos == 0 || arr[pos] != x ){ 
        cout << "-1";
    }else
    {
        cout << pos; 
    }

    return 0;
}