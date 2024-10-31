/*Matrisde enb ve enk.*/
#include<stdio.h>
main(){
    int i,j,A[3][3],enb,enk;
    printf("Dizi sayilarini giriniz: ");
    enb=A[0][0];
    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    scanf("%d",&A[i][j]);}
    
    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    printf("%d ",A[i][j]);
    printf("\n");}
    
     for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    if(A[i][j]>enb)
    enb=A[i][j];}
    enk=A[0][0];
    
    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    if(A[i][j]<enk)
    enk=A[i][j]; }
    
    printf("En buyuk sayi: %d\n",enb);
    printf("En kucuk sayi: %d",enk);
    
    }
    
     
