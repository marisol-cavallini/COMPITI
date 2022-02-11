#include <stdio.h>
#include <math.h>

int main(int argc, char*argv[]){
int a,b,c,diff;
int contapari=0, contadispari=0, contanulli=0;
do {
    printf("inserisci a\n");
    scanf("%d",&a);
    printf("inserisci b\n");
    scanf("%d",&b);
    printf("inserisci c\n");
    scanf("%d",&c);
    diff=a-b;
    if(diff=0){
        contanulli++;
    }else
    if (diff%2==0)
    {
        contapari++
    }else
    contadispari++;
}while(a+b>=c);
printf("i numeri pari sono:%d",contapari);
printf("i numeri nulli sono:%d",contanulli);
printf("i numeri dispari sono:%d",contadispari);
return 0;
}
