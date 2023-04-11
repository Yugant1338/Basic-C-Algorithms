#include<stdio.h>
#include<string.h>
int main(void){
    char num[20];
    scanf("%s",&num);
    for(int i=0;i<strlen(num);i++){
        int digit= num[i]-'0';
        /*The ascii value of '0' is subtratced from the string char which
        ultimately gives the integer form the char of string*/
        printf("%d\n",digit);
    }
}
