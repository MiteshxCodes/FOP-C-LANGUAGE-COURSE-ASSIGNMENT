#include<stdio.h>

int main(){
int day;
printf("enter 1-monday,2-tuesday,3-wednesday,4-thursday,5-friday,6-saturday,7-sunday: \n");
scanf("%d",&day);
switch(day){
case 1: printf("MONDAY");
break;
case 2: printf("TUESDAY");
break;
case 3: printf("WEDNESDAY");
break ;
case 4: printf("THURSDAY");
break;
case 5: printf("FRIDAY");
break;
case 6: printf("SATURDAY");
break;
case 7: printf("SUNDAY");
break;
default: printf("you entered invalid day");

}
return 0;
}
