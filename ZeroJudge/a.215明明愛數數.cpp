#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,m=0;
    while (cin >> n >> m){
        int time = 0;
        int sum = 0;
        for (int i = n;1;i++){
            sum += i;
            time++;
            if (sum > m) break;
        }
        cout << time << endl;
    }
    return 0;
}
