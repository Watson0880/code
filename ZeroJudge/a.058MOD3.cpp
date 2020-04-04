#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int arr[n] = {0};
    for (int i =0;i<n;i++){
        cin >> arr[i];
    }
    int a=0,b=0,c=0;
    for (int i = 0;i<n;i++){
        if (arr[i]%3==0) a++;
        else if (arr[i]%3==1) b++;
        else if (arr[i]%3==2) c++;
    }
    cout << a << " " << b << " " << c;
}
