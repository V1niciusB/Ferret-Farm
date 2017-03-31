#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//clock-alarm
int main(){
int n, seg=0, min=0, hora=0, aH, aM;
char k;
n=1;
printf("Que horas deseja despertar?\n");
scanf("%d%c%d", &aH, &k, &aM);
while(n >0){
if(seg == 60){
    seg = 0;
    min++;
}
if(min == 60){
    min = 0;
    hora++;
}
if(hora==24){
    hora = 0;
}
{
printf("\r  Hora: %d : %d : %d ", hora, min, seg);
seg++;
sleep(1);// 1 segundo
}
if(hora==aH && min==aM){
   printf("\n Acorde!");
   break;
}
}

return 0;
}
