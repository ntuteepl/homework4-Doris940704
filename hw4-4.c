#include <stdlib.h>
#include <stdio.h>
main()
{
int num;
scanf("%d",&num);
if(num>=1&&num<=10){
    int data[num][num];
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            scanf("%d",&data[i][j]);
        }
    }
    int boy,girl,max;

    max=0;
    boy=0;
    girl=0;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
        if(data[i][j]>max)
            max=data[i][j];

        }
        for(int i=0;i<num;i++){
            for(int j=0;j<num;j++){
                if(data[i][j]==max){
                boy=i;
                girl=j;
                printf("boy %d pair with girl %d\n",boy+1,girl+1);
            }
        }
        }



    }


for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(i==boy||j==girl)
                data[i][j]=0;
            }
        }
}

}


