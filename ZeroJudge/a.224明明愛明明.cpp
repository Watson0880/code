#include <bits/stdc++.h>
using namespace std;
int main()
{
    string l = "";
    while(cin >> l){
        int word[26] = {0};
        for (int i = 0;i<l.length();i++){
            if ((int)l[i]>64&&(int)l[i]<91){
                word[(int)l[i]-65]++;
            }
            else if ((int)l[i]>96&&(int)l[i]<123){
                word[(int)l[i]-97]++;
            }
        }
        int one = 0;
        for (int i = 0;i<26;i++){
            if (word[i]%2==1) one++;
        }
        if (one>1) cout << "no..." << endl;
        else cout << "yes !" << endl;
    }
}
