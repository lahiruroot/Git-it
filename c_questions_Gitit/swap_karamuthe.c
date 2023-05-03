#include<stdio.h>
void main()
{ int a,b,t;
printf("Enter the first Number : ");
scanf("%d",&a);
printf("Enter the second Number : ");
scanf("%d",&b);
t=a;
a=b;
b=t;
//what is that t doing there? kinda sus ryt!
if (a==b){
    printf("Wenna bane! Swap wenna one! Aye balanna \n");
}
else{
printf("first number is %d & the second number is %d",a,b);
}
}
