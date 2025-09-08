#include<stdio.h>
int main(){
    int age;
    //taking age as of person as input
    printf(" enter a age of person :\n");
    scanf("%d", &age);
//taking if else condition to solve given condition
    if(12 > age){
        printf(" the ticket price is $10.\n");
    }
    else if (age >= 12 && age <= 17){
        printf(" the ticket price is $15.\n");
    }
    else if(age >= 18 && age <= 59){
        printf(" the ticket price is $20.\n");
    }
    else {
        printf(" the ticket price is $12.\n");
    }
    
    return 0;

}