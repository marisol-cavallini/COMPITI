# include <studio.h>
# include <math.h>
int main ()
{
int numero;
double rad, somma=0;
do
{
printf("inserisci numero\n");
scanf("%d", numero);
if(numero<0)
{
prinf("non é possibile svolgere la radice di un numero negativo \n");
} else
{
rad=sqrt(numero);
somma=somma+rad;
}
}while (numero<0)
printf(" la somma é:%f\n", somma);
return 0;
}
