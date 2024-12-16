#include <stdio.h>

int main(){
    int n1,n2;
    printf("Informe dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    if(n1%2==0 && n2%2==0){
        printf("Ambos sao pares");
    }else if(n1%2!=0 && n2%2!=0){
        printf("Ambos sao impares");
    }else{
        printf("Um e par e o outro e impar");
    }

    return 0;
}