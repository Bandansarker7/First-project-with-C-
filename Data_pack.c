// Owner Information : Bandhan CS 
// Location : Dhaka , BD 

/*
Well Done Bandhan! I'm Tonoy and would love to offer an improved version of the same programme. Have a glance 
Date : [03.07.2025]
Location : 1475A Malvern Rd, Glen Iris.
*/
#include<stdio.h>
int main() {

   int n,gb,cal;

   printf("Select the data package:\n 1.Basic Package\n 2.Standard Package\n 3.Premium Package \n Enter your choice:");
   scanf("%d",&n);

switch(n){
   case 1:
         printf("Enter the number of GBs you want to use:");
         scanf("%d",&gb);
         cal=50*gb;
         printf("You selected the Basic Package.\n The total charge for your package is:%d",cal);
   break;
   
   case 2:
         printf("Enter the number of GBs you want to use:");
         scanf("%d",&gb);
         cal=100*gb;
         printf("You selected the Standard Package.\n The total charge for your package is:%d",cal);
   break;
   
   case 3:
         printf("Enter the number of GBs you want to use:");
         scanf("%d",&gb);
         cal=150*gb;
         printf("You selected the Premium Package.\n The total charge for your package is:%d",cal);
   break;
   
   default:
         printf("Invalid package type selected.");
      break;
   }

 return 0;
}
// End of this programme