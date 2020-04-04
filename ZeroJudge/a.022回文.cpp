#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "";
    while(cin >> a){
        string b = "";
        int n = a.length();
        for (int i = n-1;i>=0;i--){
            b = b + a[i];
        }
        for (int i = 0;i<n;i++){
            if (a[i]!=b[i]){
                cout << "no" << endl;
                break;
            }
            if (i==n-1&&a[i]==b[i]) cout << "yes" << endl;
        }
    }
}
