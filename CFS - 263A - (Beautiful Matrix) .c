#include<stdio.h>
int main()
{
    int k, row, col, i, j, t, m, q;

    int a[6][6];
   for(row=1; row<=5; row++){
        for(col=1; col<=5; col++){
            scanf("%d", &k);
            a[row][col] = k;
        }
   }

    for(row=1; row<=5; row++){
        for(col=1; col<=5; col++){
            if(a[row][col]==1){
                i= row;
                j= col;
                break;
            }
        }
    }

    if(i>3 && j>3){
        t= i - 3;
        m = j - 3;
        q = t + m;
    }else if(i<3 && j<3){
        t = 3 - i;
        m = 3 - j;
        q = t + m;
    }else if(i<3 && j>3){
        t = 3 - i;
        m = j - 3;
        q = t + m;
    }else if(i>3 && j<3){
        t = i - 3;
        m = 3 - j;
        q = t + m;
    }else if(i==3 || j ==3){
        if(i==3 && j<3){
            m = 3 - j;
            q = m;
        }else if(i==3 && j>3){
            m = j - 3;
            q = m;
        }else if(j==3 && i<3){
            t = 3 - i;
            q = t;
        }else if(j == 3 && i>3){
            t = i - 3;
            q = t;
        }else if(i==3 && j==3){
            q = 0;
        }
    }

    printf("%d\n", q);


    return 0;
}
