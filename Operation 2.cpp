#include<stdio.h>
main(){
int rakam;
char HARF;
printf("Lutfen her hangi bir karakter giriniz: ");
if(scanf("%d",&rakam))
printf("Harf degil.");
else
printf("Harf ve ya her hangi bir ozel karakterdir.");
}

