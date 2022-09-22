#include<stdio.h>
int main()
{
int num; 
printf("Enter a number\n");  
scanf("%d", &num);
if (num>=18){  
printf("person eligible for vote");}  
else{
printf("you are not eligible for vote after"+(18-num));
printf("years");
}
}