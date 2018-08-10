

#include <stdio.h>
#include <string.h>
int main(void) {
    int inpData[10];
    int i;
    for(i=0;i<10;i++){
        printf("%d個目の数値を入力->",i+1);
        scanf("%d",&inpData[i]);
    }
    
    for(i=sizeof(inpData)/sizeof(inpData[0])-1;i>=0;i--){
        printf("%d番目に入力された数値は%dです。\n",i+1,inpData[i]);
    }
    return 0;
}


asgasg
