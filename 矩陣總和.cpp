#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s = 0,t = 0,m = 0,n = 0,r = 0;
    cin >> s >> t >> m >> n >> r;
    int X[s][t] = {0};
    int Y[m][n] = {0};
    for (int i = 0;i<s;i++){
        for (int j = 0;j<t;j++){
            cin >> X[i][j];
        }
    }
    for (int i = 0;i<m;i++){
        for (int j = 0;j<n;j++){
            cin >> Y[i][j];
        }
    }
    int d = 0,k = 2147483647;
    for (int i = s-1;i<m;i++){
        for (int j = t-1;j<n;j++){
            int no_same = 0;
            int X_sum = 0;
            int Y_sum = 0;
            for (int k = s;k>0;k--){
                for (int l = t;l>0;l--){
                    if (X[s-k][t-l] != Y[i-k+1][j-l+1]){
                        no_same++;
                    }
                    X_sum += X[s-k][t-l];
                    Y_sum += Y[i-k+1][j-l+1];
                }
            }
            if (no_same<=r){
                d++;
                int de = X_sum - Y_sum;
                if (de<0) de *= -1;
                if (de < k) k = de;
            }
        }
    }
    if (d == 0){
        cout << 0 <<endl;
        cout << 0 <<endl;
    }
    if (d != 0){
    cout << d << endl;
    cout << k << endl;
    }
}
