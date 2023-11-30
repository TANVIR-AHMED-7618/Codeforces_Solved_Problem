#include<stdio.h>
int main()
{
    long long int a, b, c, w, l;
    scanf("%I64d %I64d %I64d", &a, &b, &c);

    w=a/c;
    l=b/c;

    if(a%c!=0){
        w=w+1;
    }

    if(b%c!=0){
        l=l+1;
    }


    printf("%I64d\n", w*l);

    return 0;
}
