#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//clock
int main(){
int n, seg=0, min=0, hora=0;
n=1;
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
printf("\r  Hora: %d : %d : %d ", hora, min, seg);
seg++;
sleep(1);// 1 segundo
}

return 0;
}
