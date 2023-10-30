#include <stdio.h>
#include <stdlib.h>

main()//作業二
{   int data_base[6][3]={123,456,9000,456,789,5000,789,888,6000,336,558,10000,775,666,12000,566,221,7000};
    int n;
    scanf("%d",&n);
    int ATM[n][2];
    int m=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&ATM[i][j]);

        }
    }
        for(int i=0;i<6;i++){
            for(int k=0;k<6;k++){
                if(ATM[i][0]==data_base[k][0]&&ATM[i][1]==data_base[k][1]){
                    printf("%d",data_base[k][2]);
                    m=1;
                    break;

            }

        }
        if(m!=1)
            printf("error\n");
            break;

        }
return 0;
            }
