#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a=0, m;
    string s, ss;
    cin>>s;
    cin>>ss;

    for(i=0; i<s.size(); i++){
        if(s[i] == ss[i] || s[i] == ss[i]+32 || s[i] == ss[i]-32){
            a = 0;
            continue;
        }else if(s[i]!=ss[i] || s[i]!=ss[i]+32 || s[i]!=ss[i]-32){
            n = s[i];
            m = ss[i];
            a++;
            break;
        }
    }

    if(a==0){
        cout<<"0"<<endl;
    }else if(a>0){
        if(((n>=65 && n<=90) && (m>=65 && m<=90))  || ((n>=97 && n<=122) && (m>=97 && m<=122))){
            if(n>m){
                cout<<"1"<<endl;
            }else if(m>n){
                cout<<"-1"<<endl;
            }
        }else if((n>=65 && n<=90) && (m>=97 && m<=122)){
            m = m - 32;

            if(n>m){
                cout<<"1"<<endl;
            }else if(m>n){
                cout<<"-1"<<endl;
            }
        }else if((n>=97 && n<=122) && (m>=65 && m<=90)){
            n = n - 32;
            if(n>m){
                cout<<"1"<<endl;
            }else if(m>n){
                cout<<"-1"<<endl;
            }
        }

    }

    return 0;
}
