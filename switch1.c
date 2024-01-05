#include <stdio.h>
int switch1()
{
  int e;
  int a;
  int b;
  int c;
  int d;
  int f;
  int g;
  printf ("Enter how many value:  ");
  scanf("%d",&e);
  if (e==2)
  {
    printf("Enter the value 1:  ");
    scanf ("%d",&a); 
    printf("Enter the value 2:  ");
    scanf ("%d",&b);
    printf("Enter the operator :  "); 
    scanf ("%d",&c); 
    switch(c)
   {
       case 1:
       g=a+b;
       printf("A added value 1 and 2 is :%d",g);
       break;
       case 2:
       g=a-b;
       printf("A sub value 1 and 2 is :%d",g);
       break;
       case 3:
       g=a*b;
       printf("A mul value 1 and 2 is :%d",g);
       case 4:
       g=a/b;
       printf("A div value 1 and 2 is :%d",g);
       break;
       case 5:
       g=a%b;
       printf("A modele value 1 and 2 is :%d",g);
       break;
   }
  }
  else{
    printf("Enter the value 1:  ");
    scanf("%d",&a); 
    printf("Enter the value 2:  ");
    scanf("%d",&b);
    printf("Enter the value 3:  ");
    scanf("%d",&d);
    printf("Enter the operator :  "); 
    scanf("%d",&c);
    switch(c)
   {
      case 1:
      g=a+b+d;
      printf("A added value 1 and 2 is :%d",g);
      break;
      case 2:
      g=a-b-d;
      printf("A sub value 1 and 2 is :%d",g);
      break;
      case 3:
      g=a*b*d;
      printf("A mul value 1 and 2 is :%d",g);
      break;
      case 4:
      g=a/b/d;
      printf("A div value 1 and 2 is :%d",g);
      break;
      case 5:
      g=a%b%d;
      printf("A modele value 1 and 2 is :%d",g);
      break;
  }
   }
   return 0;

}