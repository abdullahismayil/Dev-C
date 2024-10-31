#include<stdio.h>
main(){
int sayi1,sayi2,sayi3;
printf("Lutfen 3 sayi giriniz.");
scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
if(sayi1>=sayi2 && sayi1>=sayi3)
printf("En buyuk rakam: %d",sayi1);
else if(sayi2>=sayi1 && sayi2>=sayi3)
printf("En buyuk rakam: %d",sayi2);
else if(sayi3>=sayi1 && sayi3>=sayi2)
printf("En buyuk rakam: %d",sayi3);
else
printf("Lutfen rakam giriniz.");
}
