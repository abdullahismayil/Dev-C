#include<stdio.h>
main(){
int taraf1,taraf2,taraf3;
printf("Lutfen ucgenin taraflarini giriniz: ");
scanf("%d %d %d",&taraf1,&taraf2,&taraf3);
if(taraf1+taraf2>taraf3 && taraf1+taraf3>taraf2 && taraf2+taraf3>taraf1 && taraf1-taraf2<taraf3 && taraf2-taraf1<taraf3 && taraf1-taraf3<taraf2 && taraf3-taraf1<taraf2 && taraf3-taraf2<taraf1 && taraf2-taraf3<taraf1)
printf("Ucgen olusturulabilir.");
else
printf("Ucgen olusturmaniz mumkun degildir.");}
