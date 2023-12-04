#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a, b=1, j;

    string s;

    cin>>s;

    sort(s.begin(), s.end());

    j = s[0];

    for(i=1; i<s.size(); i++){
        if(j!=s[i]){
            b++;
            j = s[i];
        }else if(j==s[i]){
            j = s[i];
        }
    }

    if(b%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else if(b%2==1){
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}
