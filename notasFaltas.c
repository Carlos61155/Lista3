#include <stdio.h>

int main(){
    float nota;
    int faltas;
    printf("Informe a nota: ");
    scanf("%f", &nota);
    printf("Informe o numero de faltas: ");
    scanf("%d", &faltas);
    if(nota>=9 && nota<=10){
        if(faltas<=20){
            printf("A");
        }else{
            printf("B");
        }
    }else if(nota>=7.5 && nota<=8.9){
        if(faltas<=20){
            printf("B");
        }else{
            printf("C");
        }
    }else if(nota>=5 && nota<=7.4){
        if(faltas<=20){
            printf("C");
        }else{
            printf("D");
        }
    }else if(nota>=4 && nota<=4.9){
        if(faltas<=20){
            printf("D");
        }else{
            printf("E");
        }
    }else if(nota>=0 && nota<=3.9){
        if(faltas<=20){
            printf("E");
        }else{
            printf("E");
        }
    }else{
        printf("Insira uma nota valida");
    }

    return 0;
}