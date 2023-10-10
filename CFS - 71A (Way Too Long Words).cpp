#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, i, a, b, j;

    cin>>m;
    string s;

    for(i=1; i<=m; i++){
        cin>>s;

        if(s.size()>10){
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        }else{
            cout<<s<<endl;
        }
    }


    return 0;
}
