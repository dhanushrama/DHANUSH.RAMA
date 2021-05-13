#include<stdio.h>
#include<conio.h>
void main()
{

float fahr,celsius;
clrscr();
printf("enter the temperature in fahreniet \n");
scanf("%f",&fahr);
celsius=(fahr-32)*5/9 ;

printf("temperature in fahrenheit is %f \n",celsius);
getch();

}

