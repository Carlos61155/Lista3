#include <stdio.h>

int main(){
    int A, B, C;
    printf("Informe os valores dos lados de um triangulo: ");
    scanf("%d %d %d", &A, &B, &C);

    if(A<B+C && B<A+C && C<A+B){

        if(A==B && B==C && C==A){
            printf("Equilatero");
        }else if(A==B || A==C || B==C){
            printf("Isosceles");
        }else{
            printf("Escaleno");
        }
    }else{
        printf("Informe os valores validos dos lados de um triangulo");
    }

    return 0;
}