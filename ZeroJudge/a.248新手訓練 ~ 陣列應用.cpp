#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a= 0,b=0,N=0;
    while(cin >>a>>b>>N){
        int arr[N] = {0};
        int num = a/b;
        arr[0] = num;
        int drop = (a%b)*10;
        for (int i = 1;i<=N;i++){
            arr[i] = drop / b;
            drop = drop % b;
            drop *= 10;
        }
        for (int i= 0;i<=N;i++){
            cout <<arr[i];
            if (i==0)cout << ".";
        }
        cout << endl;
    }
}
