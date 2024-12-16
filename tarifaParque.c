#include <stdio.h>

int main(){
    int horaC, minutoC, horaS, minutoS, tempoInteiro;
    float valorH, valorM, tempoTotal;
    printf("Informe a hora de chegada: ");
    scanf("%d %d", &horaC, &minutoC);
    printf("Informe a hora de saida: ");
    scanf("%d %d", &horaS, &minutoS);
    valorH = horaS-horaC;
    valorM = minutoC-minutoS;
    valorH = valorH*60;
    tempoTotal = valorM+valorH;
    tempoInteiro = valorM+valorH;

    if(tempoTotal < 0 && valorM < 0){
        valorH = horaC-horaS;
        valorH = valorH*60;
        valorM = minutoS-minutoC;
        tempoTotal = valorM+valorH;
        tempoInteiro = valorM+valorH;
    }

    if(tempoTotal > 0 && valorM < 0){
        valorH = horaS-horaC;
        valorM = minutoS-minutoC;
        valorH = valorH*60;
        tempoTotal = valorM+valorH;
        tempoInteiro = valorM+valorH;
    }

    if(tempoTotal < 0){
        valorH = horaC-horaS;
        valorH = valorH*60;
        valorM = minutoC-minutoS;
        tempoTotal = valorM+valorH;
        tempoInteiro = valorM+valorH;
    }

    if(tempoTotal>=1 && tempoTotal<=120){
        if(tempoTotal<=60){
            printf("O preco do estacionamento fica: R$1.00");
        }else{
            printf("O preco do estacionamento fica: R$2.00");
        }
    }else if(tempoTotal>=121 && tempoTotal<=240){
        if(tempoTotal<=180){
            printf("O preco do estacionamento fica: R$4.20");
        }else{
            printf("O preco do estacionamento fica: R$5.60");
        }
    }else if(tempoTotal>=241){
        if(tempoInteiro%60==0){
            tempoInteiro = (tempoInteiro/60)*2;
            printf("O preco do estacionamneto fica: R$ %d", tempoInteiro);
        }else{
            tempoInteiro = ((tempoInteiro/60)+1)*2;
            printf("O preco do estacionamento fica: R$ %d", tempoInteiro);
        }
    }

    return 0;
}