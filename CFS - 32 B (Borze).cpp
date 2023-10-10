/******************************************************************************

                             Bismillah-hir Rahmanir Rahim

                             Author: Tanvir Ahmed Khan.

                             Codeforces Round
                             Problem - ; Rating:
                             Problem Name:

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;


#define  ll        long long ll
#define  srt(v)    sort( v.begin(), v.end())
#define  rsrt(v)   sort( v.rbegin(), v.rend())
#define  rvrs(v)   reverse( v.begin(), v.end())
#define  YES cout  << "YES" << endl
#define  yes cout  << "yes" << endl
#define  NO cout   << "NO" << endl
#define  no cout   << "no" << endl

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string str;
    cin>>str;
    int s = str.size();
    for(int i = 0 ; i < s ;){
        if(str[i] == '.'){
            cout<<0;
            ++i;
        }else if(str[i] == '-'){
            if(str[i+1] == '.')
                cout<<1;
            else if(str[i+1] == '-')
                cout<<2;
            i += 2;
        }
    }
}
