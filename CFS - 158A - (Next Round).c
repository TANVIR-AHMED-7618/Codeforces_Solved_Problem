#include<stdio.h>
int main()
{
    int n, k, i, y, cunt=0;

    scanf("%d %d", &n, &k);

    int  x[n];

    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
    }

    y = x[k-1];

    for(i=0; i<n; i++){
            if(y==0){
                if(x[i]>=1){
                    cunt++;
                }else if(x[i]==0){
                    cunt = cunt + 0;
                }
            }else if(y!=0){
                 if(x[i]>=y){
                    cunt++;
                }else if( x[i]==0){
                    cunt= cunt + 0;
                }
            }
    }



        printf("%d\n", cunt);


    return 0;
}
