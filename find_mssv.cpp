#include<bits/stdc++.h>

using namespace std;

int n;
string s;
int main() {
    freopen("find_mssv.inp", "r", stdin);
    freopen("find_mssv.out", "w", stdout);

    cin >> n;

    for(int i = 1;i <= n;i++) {
        cin >> s;

        string ans = "20";
        for(int j = 0;j < s.length();j++)
            if(s[j] <= '9' && s[j] >= '0')
                ans += s[j];
        cout << ans << endl;
    }

    return 0;
}
