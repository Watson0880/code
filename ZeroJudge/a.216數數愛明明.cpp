#include <bits/stdc++.h>
using namespace std;
long long fn(int n)
{
    if (n == 1) return 1;
    return n+fn(n-1);
}
long long gn(int n)
{
    if (n == 1) return 1;
    return fn(n)+ gn(n-1);
}
int main()
{
    int n = 0;
    while(cin >> n){
        long long f = 0,g = 0;
        f = fn(n);
        g = gn(n);
        cout << f << " " << g << endl;
    }
    return 0;
}
