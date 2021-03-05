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
/*
54
HOA.LT190467@sis.hust.edu.vn
HOANG.NH184873@sis.hust.edu.vn
Trung.ND200645@sis.hust.edu.vn
CHAU.DTT185434@sis.hust.edu.vn
DUONG.LH194032@sis.hust.edu.vn
Thao.DP200600@sis.hust.edu.vn
HIEN.QC181465@sis.hust.edu.vn
THAI.HT183826@sis.hust.edu.vn
MAI.NN193308@sis.hust.edu.vn
THUY.PT190583@sis.hust.edu.vn
BINH.PT184722@sis.hust.edu.vn
HUYEN.VTK190055@sis.hust.edu.vn
DUNG.DT194969@sis.hust.edu.vn
Thao.HM203854@sis.hust.edu.vn
linh.nv172653@sis.hust.edu.vn
Anh.NV206270@sis.hust.edu.vn
TUNG.NV184326@sis.hust.edu.vn
NGA.NT184296@sis.hust.edu.vn
Anh.NN206321@sis.hust.edu.vn
Hoang.VH200250@sis.hust.edu.vn
DAI.PQ192191@sis.hust.edu.vn
KHANG.TT183560@sis.hust.edu.vn
THUY.NT195926@sis.hust.edu.vn
Truong.NV200654@sis.hust.edu.vn
LONG.TH193305@sis.hust.edu.vn
Anh.PTM200055@sis.hust.edu.vn
KIEN.NQL193300@sis.hust.edu.vn
Tam.NTM202958@sis.hust.edu.vn
DUC.PA191469@sis.hust.edu.vn
DUONG.HH195351@sis.hust.edu.vn
CA.TN184355@sis.hust.edu.vn
THIEN.PT193451@sis.hust.edu.vn
ANH.TTM193288@sis.hust.edu.vn
Huyen.PTT204349@sis.hust.edu.vn
YEN.VTH181020@sis.hust.edu.vn
Nguyet.NTM207356@sis.hust.edu.vn
Anh.ND204811@sis.hust.edu.vn
Trang.PC200631@sis.hust.edu.vn
tung.nd170983@sis.hust.edu.vn
Ma.NV206667@sis.hust.edu.vn
THANH.NL193317@sis.hust.edu.vn
ANH.TTT193287@sis.hust.edu.vn
TUAN.TA181295@sis.hust.edu.vn
HUAN.NN184267@sis.hust.edu.vn
Giang.DT200182@sis.hust.edu.vn
Duy.PK206043@sis.hust.edu.vn
Sang.PV203558@sis.hust.edu.vn
NGUYEN.HB183962@sis.hust.edu.vn
Linh.NP206203@sis.hust.edu.vn
Hoang.PQ205662@sis.hust.edu.vn
TUOI.TTT185423@sis.hust.edu.vn
HOANG.LH190053@sis.hust.edu.vn
cuong.nh170667@sis.hust.edu.vn
HIEN.LT190454@sis.hust.edu.vn
*/
