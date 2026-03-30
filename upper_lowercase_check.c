//Q)WAP to check whether the entered letter is lower case or upper case

#include<stdio.h>

int main(){
char ch;
printf("enter the English alphabet: \n");
scanf("%c",&ch);
if (123>=ch && ch>=97){
printf("English alphabet entered is lower case");
}
else if(91>=ch && ch>=65){
printf("English alphabet entered is upper case");
}
else{
printf("NOT A ENGLISH ALPHABET");
}
return 0;
}
