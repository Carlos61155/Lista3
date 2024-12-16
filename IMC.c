#include <stdio.h>

int main(){
    float altura, peso, imc;
    printf("Informe o peso: ");
    scanf("%f", &peso);
    printf("Informe a altura: ");
    scanf("%f", &altura);
    imc = peso / (altura*altura);
if(imc<18.5){
    printf("Abaixo do peso");
    }else if(imc>=18.5 && imc<=24.9){
        printf("Peso normal");
    }else if(imc>=25 && imc<=29.9){
        printf("Sobrepeso");
    }else{
        printf("Obesidade");
    }

    return 0;
}