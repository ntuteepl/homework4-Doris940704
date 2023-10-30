#include <stdio.h>
#include <stdlib.h>
main(){
    int st,dt;
    int schedule[1000][3];//開始，結束，司機工作狀態
    int driver=0;
    int n;//班次
    while(scanf("%d%d",&st,&dt)!=EOF){
            schedule[n][0]=st;
            schedule[n][1]=dt;
            schedule[n][2]=-1;
            n++;
    }
    int t[25]={0};
    for(int i=0;i<n;i++){
        for(int j=schedule[i][0];j<schedule[i][1];j++){
            t[j]=t[j]+1;
            }

    }
    int count=0;
    while(count<n){
    for(int j=0;j<25;j++){
                    int m;
                    if(t[j]!=t[j+1]){
                       int m=0;
                       m=t[j+1]-t[j];
                       if(m>0){
                            schedule[count][2]=1;
                            driver=driver+m;
                            count++;
                        }
                       if(m<0){
                            schedule[count-1][2]=0;
                            count++;

                       }

                    }
                    if(t[j]=t[j+1]){
                        for(int k=0;k<n;k++){
                            if(schedule[k][2]=0){
                                schedule[k][2]=1;
                            }
                        count++;
                        }
                    }
                }
            }



    printf("%d",driver);
}

