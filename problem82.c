#include<stdio.h>

int main(){
    int a[5],i,avg;
    int *p = a;

    for(i = 0 ; i<5; i++){
    scanf("%d",(p+i));
        }
        int sum = 0;
        for(i = 0; i<5; i++){
            sum = sum + *(p+i);
             avg = sum /5;
            
        }
printf("%d",avg);
return 0;
}