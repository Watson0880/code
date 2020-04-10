#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0,b = 0;
    while(cin >> a >> b){
        int c = 0,d = 0;
        if (a > b){
            c = b;
            d = a;
        }
        else {
            c = a;
            d = b;
        }
        int time = d - c + 1;
        int num[time] = {0};
        for (int i = 0;i<time;i++){
            int n = c+i;
            num[i]++;
            while(1){
                if (n==1) break;
                if (n%2==1) n = n*3+1;
                else n /= 2;
                num[i]++;
            }
        }
        int Max = 0;
        for (int i = 0;i<time;i++){
            if (num[i]>Max) Max = num[i];
        }
        cout << a << " " << b << " " << Max << endl;
    }
}
