#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
//relógio
int main(){
int n, segundo=0, minutos=0, hora=0;
n=1;
while(n >0){
if(segundo == 60){
    segundo = 0;
    minutos++;
}
if(minutos == 60){
    minutos = 0;
    hora++;
}
if(hora==24){
    hora = 0;
}
printf("\r  Hora: %d : %d : %d ", hora, minutos, segundo);
segundo++;
sleep(1);// 1 segundo
}

return 0;
}
