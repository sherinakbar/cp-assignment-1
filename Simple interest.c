#include <stdio.h>
void main()
     {
       float principle,time,rate,SI;
       printf("Enter principle(amount):n");
       scanf("%f",&principle);
       printf("Enter time:");
       scanf("%f",&time);
       printf("Enter rate:");
       scanf("%f",&rate);
       SI=(principle*time*rate)/100;
       printf("simple interest=%f",SI);
     }
