#include <stdlib.h>
#include <stdio.h>
int main(){
    int number,sum,count=0;
    while (sum<=5000){
    printf("vuvedete chislo");
    scanf("%d",&number);
    if(number%2==0){
    sum+=number;
    }
    else
    {
       count+=1; 
    }
    }
    printf("sumata na chetnite e:%d",sum);
    printf("broia na nechetnite e:%d",count);
    system("pause");
    }
