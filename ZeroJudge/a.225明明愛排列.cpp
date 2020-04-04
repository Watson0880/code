#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    if (a%10<b%10){
        return 1;
    }
    if (a%10==b%10){
        if (a>b) return 1;
        else return 0;
    }
    if (a%10>b%10){
        return 0;
    }
}
int main()
{
    int n =0;
    while(cin >> n){
        int arr[n] = {0};
        for (int i = 0;i<n;i++){
            cin >> arr[i];
        }
        for (int i = 0;i<n;i++){
            sort(arr,arr+n,cmp);
        }
        for (int i = 0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
