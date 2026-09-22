#include <stdio.h>
int main(){
int arr[5]={10 ,25, 7 ,42 ,18};
int max=arr[0];
for (int i=0;i<5;i++){
    if (arr[i]>max){
        max=arr[i];
    }
}
printf("Maximum value=%d",max);
}

