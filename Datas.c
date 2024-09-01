#include <stdio.h>

/*Fiz todos no mesmo código, achei que ficava melhor :D */

typedef struct {
 int dia;
 int mes;
 int ano;
} Data;

int tirarDia(Data data) {
 return data.dia;
}

int compararDatas(Data data1, Data data2) {
if (data1.ano < data2.ano){
  return -1;}
else if (data1.ano > data2.ano){
  return 1;}
else if (data1.mes < data2.mes){
  return -1;}
else if (data1.mes > data2.mes){
  return 1;}
else if (data1.dia < data2.dia){
  return -1;}
else if (data1.dia > data2.dia){
  return 1;}
else{
  return 0;}
}

int main() {
Data data1;
Data data2;
printf("data 1\n");
printf("dia: ");
scanf("%d", &data1.dia);
printf("mês: ");
scanf("%d", &data1.mes);
printf("ano: ");
scanf("%d", &data1.ano);
printf("data 2\n");
printf("dia: ");
scanf("%d", &data2.dia);
printf("mês: ");
scanf("%d", &data2.mes);
printf("ano: ");
scanf("%d", &data2.ano);
printf("%d\n", tirarDia(data1));
printf("%d\n", compararDatas(data1, data2));   
return 0;
}
