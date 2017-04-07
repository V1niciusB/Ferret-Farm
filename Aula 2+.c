#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//clock-alarm
int main(){
int n, seg=0, min=0, hora=0, aH, aM, aS;
    char k;
    n=1;
    printf("Que horas deseja despertar?\n");//Hora:Minuto:Segundo
    scanf("%d%c%d%c%d", &aH, &k, &aM, &k, &aS);
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
            printf("\r Hora: %d : %d :%d ", hora, min, seg);
            seg++;
            sleep(1);//1 segundo
        }
        if(hora==aH && min==aM && seg==aS){
            printf("\nAcorde!");
            break;
        }
    }
    return 0;
    }
