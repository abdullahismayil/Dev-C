/*Matrisde cift sayilar*/
#include<stdio.h>
main(){
    int i,j,A[3][3];
    printf("Lutfen sayilari giriniz: ");
    
    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    scanf("%d",&A[i][j]);}
    
    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    printf("%d ",A[i][j]);
    printf("\n");}
    
    printf("Cift sayilar: ");
    
    for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    if(A[i][j]%2==0)
    printf("%d ",A[i][j]);}}
    
    
