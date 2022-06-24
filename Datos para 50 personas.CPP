/* Pedir los siguientes datos para 50 persoas: Nombre: Aportacion: obtener y desplegar el total
   Aportado para todas las personas total = total + aportacion */
#include<conio.h>
#include<stdio.h>
int total, aportacion, x;
char nom[20];
main()
{

	total = 0;
   printf(" Shower Medico \n\n");
   for (x=1; x<=50; x=x+1)
{
  printf("\n Dame Tu Nombre: "); scanf ("%s", &nom);
  printf("\n Cuanto deseas aportar: "); scanf("d", &aportacion);
}
	printf("\n\n Autor: Irvin Adrian");
  getch();

}
