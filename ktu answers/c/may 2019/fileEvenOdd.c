#include <stdio.h>
int main()
{
   FILE *all, *even, *odd;
   int number;
   printf("enter the limit\n");
   scanf("%d",&number);

   all = fopen("DATA", "w"); 
   even=fopen("odd","w");
   odd=fopen("odd","w");

   if (all==NULL || even==NULL || odd==NULL)
   {
       printf("cannot open");
       exit(0);
   }
   for (int i = 0; i < number; i++)
   {
      fputc(i,all);
      if (i%2==0)
      {
          fputc(i,even);
      }else
      {
          fputc(i,odd);
      }
      
      
   }
   fclose(all);
   fclose(even);
   fclose(odd);
   

}
