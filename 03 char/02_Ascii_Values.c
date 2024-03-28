//each char has a ascii value which is a integer
#include<stdio.h>
int main(){
    char ch1='z';
    char ch2='a';
    char ch3='A';
    char ch4='0';
    printf("ch1: %d\nch2: %d \nch3: %d\n",ch1,ch2,ch3);
    printf("ch4: %d",ch4);// this is implicit type csting insted of %c we write %d means we are changing it from chat to num lly
    char ch5='@';
    int asc=(int)ch5;
    printf("\nasc: %d",asc);
    return 0;


}
// now we will convert num to char



 