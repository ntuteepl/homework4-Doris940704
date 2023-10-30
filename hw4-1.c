#include <stdio.h>
#include <stdlib.h>

main()//作業一
{
    int n;
    scanf("%d",&n);

    if((n>=1)&&(n<=50)){
        int num[n];
        for(int i=0;i<n;i++){
            scanf("%d",&num[i]);
        }
        for(int i=0;i<n;i++){
            int k=0;
            for(int j=2;j<num[i];j++){
                if((num[i]%j)==0)
                    k++;

            }
            if(k!=0)
                printf("NO ");
            else
                printf("YES ");
        }
    }
}
