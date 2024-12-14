// digit counter how many numbers user enters
#include<stdio.h>
void main(){
    int number,count=0,temp;

    printf("Enter the Number:");
    scanf("%d",&number);

    if(number==0){
        count=1;
        printf("1");
    }
    else{
        for(temp=number;temp!=0;temp/=10){
            count++;
        }
        printf("%d",count);
    }

}