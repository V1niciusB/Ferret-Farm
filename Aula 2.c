#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//clock-alarm
int main(){
int n, segundo=0, minuto=0, hora=0, aH, aM;
char p;
n=1;
printf("Que horas deseja despertar?\n");
scanf("%d%c%d", &aH, &p, &aM);
while(n >0){
if(segundo == 60){
    segundo = 0;
    minuto++;
}
if(minuto == 60){
    minuto = 0;
    hora++;
}
if(hora==24){
    hora = 0;
}
{
printf("\r  Hora: %d : %d : %d ", hora, minuto, segundo);
segundo++;
sleep(1);// 1 segundo
}
if(hora==aH && minuto==aM){
   printf("\nAcorde!");
   break;
}
}

return 0;
}
