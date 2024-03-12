/*
escreva um programa que receba 3 valores inteiros referentes aos lados de um triangulo.
o seu programa deve imprimir se esses tres numeros formam um triangulo ou nao.

variaveis lados, valores
verificacao dos valores
mostrar o resultado
*/


/*
Isósceles = 2 lados iguais, um diferente
Equilátero = Todos os lados iguais
Escaleno = Tres lados diferentes

*/
#include <stdio.h>
int main(){
int a,b,c;
    printf("Digite Valor de A: ");
    scanf("%d",&a);
    printf("Digite Valor de B: ");
    scanf("%d",&b);
    printf("Digite Valor de C: ");
    scanf("%d",&c);
    if(a<b+c && b<a+c && c<b+a){
        printf("E Possivel\n");
        if(a==b && b!=c || b==c && b!=a || c==a && c!=b){
            printf("Isósceles");
            }
        else if(a==b && b==c){
            printf("Equilatero");
            }
        else if(a!=b && b!=c && c!=a){
            printf("Escaleno");
            }
    }
    else{
       printf("Nao E Possivel");
    }
}
