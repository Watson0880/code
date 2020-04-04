#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a,long long b)
{
    if (b == 0) return a;
    if (b>a){
        long long cmp = a;
        a = b;
        b = cmp;
    }
    return GCD(b,a%b);
}
int main()
{
    long long a = 0,b = 0;
    while(cin >> a >> b){
        cout << GCD(a,b) << endl;
        a = 0;
        b = 0;
    }
}
