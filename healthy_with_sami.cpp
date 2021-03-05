#include<bits/stdc++.h>

using namespace std;

string num;
string a[100];
int n, m;

int change(string num) {
    int number = 0;
    int len = num.length();
    for(int i = len-1;i >= 0;i--) {
        int add = int(num[i] - '0');
        number = number + add*pow(10,len-i-1);
    }

    return number;
}
int main() {
    freopen("sami.inp", "r", stdin);
    freopen("sami.out", "w", stdout);

    getline(cin, num);
    n = change(num);
    getline(cin, num);
    m = change(num);

//    cout << n << ' ' << m << endl;
    for(int i = 1;i <= n;i++) {
        getline(cin, a[i]);
    }

    string s;
    for(int i = 1;i <= m;i++) {
        getline(cin, s);
        int check = 0;
        for(int j = 1;j <= n;j++) {
            string cur = "";
            int sz = a[j].size();

            for(int k = 8;k >= 1;k--)
                cur += a[j][sz-k];

            if(s == cur) {
                string ans = "";
                for(int k = 0;k < sz-8;k++)
                    ans += a[j][k];

                cout << ans << endl;

                check = 1;
            }
        }

        if(check == 0) cout << s << endl;
    }

}
