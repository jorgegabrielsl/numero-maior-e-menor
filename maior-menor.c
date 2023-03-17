#include <stdio.h>
int main()
{
    int a,b,c;

    printf("informe o primeiro valor: ");
       scanf("%d",&a);
    printf("informe o segundo valor: ");
     scanf("%d",&b);
    printf("informe o terceiro valor: ");
      scanf("%d",&c);

    if (a>=b && a>=c)
    {
       printf("valor maior e primeiro: %d\n ", a);
    }
   else if(b>=a && b>=c)
   {
       printf("valor maior e o segundo: %d\n",b);
   }
   else if(c>=b && c>=a){
       printf("valor maior e o terceiro: %d\n",c);
   }     
   if (a<=b && a<=c)
   {
       printf("valor menor e o primeiro: %d\n",a);
   }
    else if (b<=a && b<=c)
   {
       printf("valor menor e o segundo: %d\n",b);  
   }
   else if (c<=a && c<=b)
   {
       printf("valor menor e o terceiro: %d\n",c);  
   }
}