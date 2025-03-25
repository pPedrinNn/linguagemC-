#include <stdio.h>
 
int soma(int a, int b){
    int s = a + b;
    return s;
}
 
int sub(int a, int b){
    int s = a - b;
    return s;
}
int main(){
    int n1, n2, op, res;
    int fim = 0;
 
    while (fim==0)
    {
        printf("\n Digite um valor: ");
        scanf("%d", &n1);
        printf("Digite outro valor: ");
        scanf("%d", &n2);
 
        printf("Escolha a operação: ");
        scanf("%d", &op);
       
        if(op =1){
            res = soma(n1, n2);
        }else if(op = 2){
            res = sub(n1, n2);
        }
 
        printf("\nResultado: %d, quer continuar?", res);
        scanf("%d", &fim);
    }
 
    return 0;
   
}