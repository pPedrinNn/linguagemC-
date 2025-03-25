#include <stdio.h>

//Define uma função chamada somar
//Recebe dois numeros inteiros como parametros: a e b
//Retorna um inteiro(a soma)

int somar(int a, int b){

    return a + b; //Retorna a soma

}

int main(){

    int x = 10, y = 5; //Declara duas variaveis inteiras
    int resultado;

    //Chama a função somar passando x e y
    resultado = somar (x, y);

    printf("Resultado da soma--> %d\n", resultado);

    return 0;

}