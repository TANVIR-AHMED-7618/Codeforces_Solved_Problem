#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a, b, j;

    string s;

    cin>>s;

    sort(s.begin(), s.end());

    a = s.size();
    b = a/2;

    for(i=b; i<a-1; i++){
        cout<<s[i]<<"+";
    }

    cout<<s[a-1]<<endl;

    return 0;
}
