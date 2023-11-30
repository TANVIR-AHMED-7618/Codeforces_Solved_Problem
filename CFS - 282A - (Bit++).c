#include<stdio.h>
int main()
{
    int x=0, n, i;
    char c[3];
    scanf("%d", &n);

    for(i=n; i>0; i--){
        scanf("%s", c);

        if(c[1]=='+'){
            x++;
        }else if(c[1]=='-'){
            x--;
        }
    }

    printf("%d\n", x);

    return 0;
}
