#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    while(cin >> n){
    if (n>=40) cout << "100" << endl;
    else if (n>=21&&n<40){
        n -= 20;
        int sum = 0;
        sum += 80 + n;
        cout << sum << endl;
    }
    else if(n>=11&&n<21){
        n -= 10;
        int sum = 0;
        sum += 60 + n * 2;
        cout << sum << endl;
    }
    else if (n<=10){
        int sum = n * 6;
        cout << sum << endl;
    }
    }
    return 0;
}
