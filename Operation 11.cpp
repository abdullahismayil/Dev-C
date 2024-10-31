/*Normal arrayda enb ve enk.*/
#include<stdio.h>
main(){
    int i,j,A[7],enb,enk;
    printf("Dizi sayilarini giriniz: ");
    enb=A[0];
    enk=A[0];
    for(i=0;i<7;i++){
    scanf("%d",&A[i]);
    if(A[i]>enb)
    enb=A[i];  
    if(A[i]<enk)
    enk=A[i];
    }
    printf("En buyuk: %d\n",enb);
    printf("En kucuk: %d",enk);
}
