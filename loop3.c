#include<stdio.h>
void main(){
    int num,first,last,total;

    printf("Enter the Number:");
    scanf("%d",&num);

    last=num%10;
    printf("\nThe Last Number Is:%d",last);

    while(num!=0){
        first=num;
        num=num/10;
    }
    printf("\nThe First Number Is:%d",first);

    total=first+last;
    printf("\nThe Total of first & last number is: %d",total);
}