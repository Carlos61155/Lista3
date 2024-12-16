#include <stdio.h>

int main(){
    float produto, valorFinal;
    int pagamento;
    printf("Qual o valor do produto?\n");
    scanf("%f", &produto);
    printf("Digite 1 se o pagamento for a vista, 2 se o pagamento for parcelado em duas vezes e 3 se for parcelado em tres vezes:\n");
    scanf("%d", &pagamento);
    if(pagamento==1){
        valorFinal = produto-(produto*0.10);
        printf("O valor final fica: R$ %.2f", valorFinal);
    }else if(pagamento==2){
        printf("O valor final fica %.2f", produto);
    }else if(pagamento==3){
        valorFinal = produto+(produto*0.05);
        printf("O valor final fica: R$ %.2f", valorFinal);
    }else{
        printf("Digite uma forma de pagamento valida");
    }

    return 0;
}