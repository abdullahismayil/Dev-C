/*girilen eded sorusulur.(Array ici)
girilir.
girilen ededlerin ortalamasi.*/
#include<stdio.h>
main(){
	int i,A[6];
	float ortalama,toplam=0;
	printf("Lutfen dizi sayilarini giriniz: ");
    for(i=0;i<6;i++){
    scanf("%d",&A[i]);
    toplam+=A[i];}
    ortalama=toplam/i;
    printf("Ortalama: %f",ortalama);}

