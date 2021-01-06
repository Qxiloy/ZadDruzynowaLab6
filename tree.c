#include<stdio.h>
#include<stdlib.h>
 unsigned gwiazdka, wysokosc, spacja, choinka, pien;
 int main ()
 {
     printf("Podaj wysokosc choink:");
     scanf("%d", &wysokosc);

     for (gwiazdka = 0; gwiazdka < wysokosc; gwiazdka++)
     {
         spacja = wysokosc - gwiazdka;
         for (spacja;spacja>0;spacja--)
         printf(" ");

         for (choinka= 0;choinka<=2*gwiazdka; choinka++)
        printf("*");
        printf("\n");
     }
        int pien;
        for (pien = 0; pien<gwiazdka; pien++)
       {
           printf(" ");
        }   

        printf("*");

         
         
     return 0;
     
 }


