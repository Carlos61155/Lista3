#include <stdio.h>

int main(){
    float n1, n2, n3, m;
    printf("Informe as notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    m = (n1+n2+n3)/3;
    if(m >= 7){
        printf("Aprovado");
    }else if(m>=5 && m<7){
        printf("Recuperacao");
    }else{
        printf("Reprovado");
    }

    return 0;
}