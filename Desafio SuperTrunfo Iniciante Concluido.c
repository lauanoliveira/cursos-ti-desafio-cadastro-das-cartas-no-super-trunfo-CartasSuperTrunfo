# include <stdio.h>
int main () {


char estado [15];
char codigodaCarta [20];
char nomeDaCidade [12];
int populacao;
float area;
float PIB;
int numerodepontoturistico;
float DensidadePopulacional;
float PIBperCapita;


printf ("Carta 1 \nDigine o nome do estado:  ");

scanf ("%s",  &estado);


printf( "Codigo da carta:  ");
scanf("%s",   &codigodaCarta);

printf("Nome da cidade: ");
scanf("%s",   &nomeDaCidade);

printf ("Quantidade de populacao: ");
scanf("%d",    &populacao);

printf ("Digite a area em km²:  ");
scanf("%f",  &area);

printf ("PIB:  ");
scanf("%f",   &PIB);

printf ("Numero de pontos turisticos:  ");
scanf("%d",  &numerodepontoturistico);

printf (" - Estado:  %s \n - Codigo da Carta:  %s \n - Cidade:  %s \n - População  %d \n - area  %.2f  \n - PIB %.2f  \n - Numeros de pontos turisticos  %d  \n",  estado,  codigodaCarta, nomeDaCidade, populacao, area, PIB, numerodepontoturistico );





char codigodaCarta3 [13];
char nomedoestado [15];
char nomeDaCidade2 [7];
int populacao2;
float area2;
float PIB2;
int numerodepontoturistico2;
float DensidadePopulacional2;
float PIBperCapita2;


printf ("Agora, cadastre a carta 2  \n   Carta 2   \n    Digine o nome do estado:   ");
scanf ("%s",  &nomedoestado);


printf( "Codigo da carta 2:  ");
scanf("%s",   &codigodaCarta3);

printf("Nome da cidade: ");
scanf("%s",   &nomeDaCidade2);

printf ("Quantidade de populacao: ");
scanf("%d",    &populacao2);

printf ("Digite a area em km²:  ");
scanf("%f",  &area2);

printf ("PIB:  ");
scanf("%f",   &PIB2);

printf ("Numero de pontos turisticos:  ");
scanf("%d",  &numerodepontoturistico2);

printf (" - Estado:  %s \n - Codigo da Carta:  %s \n - Cidade:  %s \n - População  %d \n - area  %.2f  \n - PIB %.2f  \n - Numeros de pontos turisticos  %d  \n",  nomedoestado ,  codigodaCarta3 , nomeDaCidade2, populacao2, area2, PIB2, numerodepontoturistico2 );








return 0;





}
