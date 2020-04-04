#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r = 0,w = 0;
    while(cin >> r >> w){
        int arr1[r][w] = {0};
        for (int i=0;i<r;i++){
            for (int j=0;j<w;j++){
                cin >> arr1[i][j];
            }
        }
        int arr2[w][r] = {0};
        for (int i = 0;i<w;i++){
            for (int j = 0;j<r;j++){
                arr2[i][j] = arr1[j][i];
            }
        }
        for (int i = 0;i<w;i++){
            for (int j = 0;j<r;j++){
                cout << arr2[i][j] << " ";
            }
            cout << endl;
        }
    }
}
