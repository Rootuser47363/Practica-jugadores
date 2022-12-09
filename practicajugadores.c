#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i;
void nombres();
void menu();
void lista();
void buscar();
void alto();
struct registro{
int edad;
float altura;
char nombre[50];
};
struct registro jugador[5];
int main()
{
    nombres();
    menu();
    return 0;
}
void nombres(){
 for( i=0;i<=4;i++){
printf("Dame el nombre del basquetbolista %d \n",i+1);
gets(jugador[i].nombre);
printf("Dame la altura del basquetbolista %d \n",i+1);
scanf("%f",&jugador[i].altura);
printf("Dame la edad del basquetbolista %d \n",i+1);
scanf("%d",&jugador[i].edad);
fflush(stdin);
}}
void menu(){
int a;
do{
    printf("Bienvenido al menu \n");
    printf("://////////////////////////: \n");
    printf("Teclea 1 para lista de jugadores \n");
    printf("Teclea 2 para la opcion buscar jugador \n");
    printf("Teclea 3 para la opcion jugador mas alto \n");
    printf("://////////////////////////: \n");
    printf("Opcion \n");
    
scanf("%d",&a);
switch(a){
case 1:
lista();
break;
case 2:
buscar();
break;
case 3:
alto();
break;
default:
printf("Esa opcion no existe \n");
break;
}
}while(a!=4);}

void lista(){
    for( i=0;i<=4;i++){
        printf("El nombre del basquetbolista  %d es: %s, su altura es %f y su edad %d \n",i+1,jugador[i].nombre,jugador[i].altura,jugador[i].edad);
}}

void buscar(){
char nom[60];
int contador=0;
fflush(stdin);
printf("Nombre del basquetbolista a buscar: \n");
gets(nom);
for( i=0;i<=4;i++){
    if((strcmp(jugador[i].nombre,nom)==0)){
        printf("La edad del basquetbolista %s es %d y su altura %f \n",jugador[i].nombre,jugador[i].edad,jugador[i].altura);
    contador=contador+1;}
}
if(contador==0){
        printf("El jugador no existe \n");
}
}
void alto(){
    int posMay=0;
    float may=jugador[0].altura;
    for( i=0;i<=4;i++){
        if(jugador[i].altura>may){
            may=jugador[i].altura;
            posMay=i;
        }
    }
printf("El basquetbolista mas alto es %s y tiene %f de altura \n",jugador[posMay].nombre,jugador[posMay].altura);
}



