#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    while(cin >> n){
        string a = "";
        while (n!=0){
            if (n%2 == 1){
                a = '1' + a;
            }
            else if (n%2==0){
                a = '0' + a;
            }
            n /= 2;
        }
        cout << a << endl;
    }
}
