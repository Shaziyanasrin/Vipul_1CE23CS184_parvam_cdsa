#include<stdio.h>
int main(){
    int arr[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
   // printf("%d",arr[][]);
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}