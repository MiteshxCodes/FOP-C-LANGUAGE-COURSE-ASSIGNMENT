#include<stdio.h>

int main(){
int a;
printf("enter a number: ");
scanf("%d",&a);
if(a>5){
printf("a is greater than 5");
}
else if(a>0){
printf("a is positive");
}
else if(a==0){
printf("a is zero");
}
else if(a==-2){
printf("a is equal to -2");
}
else {
printf("a is negative");
}
return 0;
}
