#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    while(cin >> n){
            int a = n-1;
            int b = 1;
        for(int i = 0;i<n;i++){
            for (int j = a;j>0;j--){
                cout << "_";
            }
            for (int j =0;j<b;j++){
                cout << "*";
            }
            for (int j = a;j>0;j--){
                cout << "_";
            }
            a--;
            b+=2;
            cout << endl;
        }
    }
    return 0;
}

