#include <stdio.h>
// klavyeden girilen 2 sayı aralarında asal mı değil mi?

int main() 

{
 
  int sayi1,sayi2;
  
  int max,min;
  
  int AralarindaAsalMi = 0; // sanki aralarında asalmış gibi kabul et
  
  int i;
  
  printf("1.sayiyi girin: ");
  scanf("%d",&sayi1);
  
  printf("2.sayiyi girin: ");
  scanf("%d",&sayi2);
  
   if(sayi1 < 1 || sayi2 < 1)
   {
     printf("pozitif tam sayi girin!");
   }
   
   else if(sayi1 == 1 || sayi2 == 1)
   {
     printf("%d ile %d aralarinda asaldir.",sayi1,sayi2);
   }
   
   if(sayi1 > sayi2)
   {
     max = sayi1;
     min = sayi2;
   }
   
   else // sayi2 > sayi1 ise
   {
     max = sayi2;
     min = sayi1;
   }
   
   for(i = 2 ; i <= min ; i++)
   {
     if(max % i == 0 && min % i == 0) 
     {
       AralarindaAsalMi = 1; // aralarında asal değil
       break;
     }
   }

   if(AralarindaAsalMi == 1)
   {
     printf("%d ile %d aralarinda asal degildir.",sayi1,sayi2);
   }
   
   else
   {
     printf("%d ile %d aralarinda asaldir.",sayi1,sayi2);
   }
  
   return 0;

}