#include<stdio.h>
void main()
{
int mes, dia;
printf("\nDame tu mes de nacimiento\n");
scanf("%d",&mes);
printf("\nDame tu dia de nacimiento\n");
scanf("%d",&dia);
if ((mes == 4 && dia <= 20) || ( mes == 3 && dia >= 21))
printf("\nAries\n");
// Signo de Tauro 
// 21 - 4 -- 20 - 5
if ((mes == 5 && dia <= 20) || ( mes == 4 && dia >= 21))
printf("\nTauro \n");
// Géminis
// 21 de mayo – 21 de junio 
// 21 - 5 -- 21 -6
if ((mes == 6 && dia <= 21) || ( mes == 5 && dia >= 21))
printf("\nGéminis\n");
// Cáncer
// 22 de junio – 22 de julio
// 22 - 6 -- 22 - 7
if ((mes == 7 && dia <= 22) || ( mes == 6 && dia >= 22))
printf("\nCáncer\n");
// Leo
// 23 de julio – 22 de agosto
// 23 - 7   --  22 - 8 
if ((mes == 8 && dia <= 22) || ( mes == 7 && dia >= 23))
printf("\nLeo\n");
// Virgo
//  23 de agosto – 22 de septiembre
// 23 - 8       22 - 9
if ((mes == 9 && dia <= 22) || ( mes == 8 && dia >= 23))
printf("\nVirgo\n");
//  Libra
//  23 de septiembre – 22 de octubre
// 23 - 9       22 - 10
if ((mes == 10 && dia <= 22) || ( mes == 9 && dia >= 23))
printf("\nLibra\n");
//  Escorpio
//  23 de octubre – 22 de noviembre
// 23 10        22  11
if ((mes == 11 && dia <= 22) || ( mes == 10 && dia >= 23))
printf("\nEscorpio\n");
//  Sagitario
//  23 de noviembre – 21 de diciembre
// 23 11        21 12
if ((mes == 12 && dia <= 21) || ( mes == 11 && dia >= 23))
printf("\nSagitario\n");
//  Capricornio
//  22 de diciembre – 20 de enero
// 22  12       20  1
if ((mes == 1 && dia <= 20) || ( mes == 12 && dia >= 22))
printf("\nCapricornio\n");
//  Acuario
//  : 21 de enero – 18 de febrero
// 21  1        18  2
if ((mes == 2 && dia <= 18) || ( mes == 1 && dia >= 21))
printf("\nAcuario\n");
//  Piscis
//  19 de febrero – 20 de marzo
// 19  2        20  3
if ((mes == 3 && dia <= 20) || ( mes == 2 && dia >= 19))
printf("\nPiscis\n");
}
