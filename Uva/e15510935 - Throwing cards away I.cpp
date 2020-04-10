#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1){
        int n = 0;
        cin >> n;
        if (n == 0) break;
        queue <int> arr;
        for (int i =1;i<=n;i++){
            arr.push(i);
        }
        cout << "Discarded cards:";
        while(1){
            if (arr.size()==1)break;
            cout << " " << arr.front();
            if (arr.size()>2) cout << ",";
            arr.pop();
            arr.push(arr.front());
            arr.pop();

        }
        cout << endl;
        cout << "Remaining card: ";
        cout << arr.front();
        cout << endl;
    }
}
