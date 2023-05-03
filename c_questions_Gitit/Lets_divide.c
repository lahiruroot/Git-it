#include<stdio.h>

void main() {
  float a, b, c, d;
  printf("Enter two Numbers : ");
  scanf("%f %f", &a, &b);
  c = a / b;
  printf("Division is %.2f", c);
}