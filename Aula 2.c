#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //Para usar o sleep
//clock-alarm
int main(){
int n, seg=0, min=0, hora=0, aH, aM, aS; //variaveis inteiras
    char k; //variavel literal
    n=1;
    printf("Que horas deseja despertar?\n");//Hora:Minuto:Segundo
    scanf("%d%c%d%c%d", &aH, &k, &aM, &k, &aS);// %d=inteiro %c=letra
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
            sleep(1);//pausa o "seg++" por 1 segundo -> o relogio nao fica turbo
        }
        if(hora==aH && min==aM && seg==aS){
            printf("\nAcorde!");
            break; //para o relógio
        }
    }
    return 0;
    }
