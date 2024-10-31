#include<stdio.h>
main(){
int i,faktoryel=1,a,tfaktoryel=2;
double sonuct=1,islem,sonuc;
for(a=1;a<100;a++){
faktoryel*=a;
sonuc=(double)a/faktoryel;
if(sonuc<0.001){
sonuc=a;
break;}}
for(i=3;i<a;i++){
tfaktoryel*=i;
islem=(double)i/tfaktoryel;
sonuct+=islem;}
printf("Sonuc: %lf",sonuct);}
