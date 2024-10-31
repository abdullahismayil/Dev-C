#include<stdio.h>
main(){
int ders1,ders2,ders3,ders4,ders5,ortalama;
printf("Lutfen derslerden aldiginiz notlari sirasiyla giriniz:");
scanf("%d %d %d %d %d",&ders1,&ders2,&ders3,&ders4,&ders5);
ortalama=(ders1+ders2+ders3+ders4+ders5)/5;
if(ortalama>91)
printf("Harf notunuz:A");
else if(ortalama>81)
printf("Harf notunuz:B");
if(ortalama>71)
printf("Harf notunuz:C");
if(ortalama>61)
printf("Harf notunuz:D");
else if(ortalama>51)
printf("Harf notunuz:E");
else
printf("Harf notunuz:F");}
