/*girilen eded sorusulur.(Array ici)
girilir.girilenlerde cift indisde bulunanlar.*/
#include<stdio.h>
main(){
	int A[12],i,j;
	printf("Dizi ici sayilari giriniz: ");
	for(i=0;i<12;i++)
	scanf("%d",&A[i]);
	printf("Cift indisli sayilar: ");
	for(j=0;j<12;j++){
	if(j!=0 && j%2==0)
	printf("{%d} ",A[j]);}

	
}
