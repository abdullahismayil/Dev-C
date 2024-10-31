#include<stdio.h>
main(){
int i,n,toplam=0;
printf("Kaca kadar sayilarin toplanacagini lutfen belirtiniz: ");
scanf("%d",&n);
for(i=1; i<=n; i++){
toplam+=i;}
printf("Toplam: %d",toplam);
}
