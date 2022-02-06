# include <studio.h>
int main()
{
int num1, num2, num3;
do
{
printf("inserisci num1\n");
scanf("%d", &num1);
printf("inserisci num2\n");
scanf("%d", &num2);
printf("inserisci num3\n");
scanf("%d", &num3);
if (num1<num2 && num2<num3)
{
printf("il valore massimo é: %d \n", num3);
printf("il valore minimo é: %d \n", num1);
} else
printf(" Terna non valida \n");
} while ( num1>=0 && num2>=0 && c>=0);
return 0;
}
