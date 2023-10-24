#include <stdio.h>

//aqui elimine las anteriores definiciones que meti esto me costo pero ya nada//
int es_primo(int numero) {
    if (numero <= 1) {
        return 0;//con esto evito que me pongan numeros negativos o un 1 ya que tecnicamente es primo pero mejor no lo escribimos ya que si 1 fuera primo nungun numero que no sea decimal lo seria.//
    }
    for (int i = 2; i * i <= numero; i++) {//con este bucle verifico si numero es apropiado para ser primo//
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, numero, pares = 0, primos = 0;

    printf("Ingrese la cantidad de números enteros que desees meter: ");//aqui digo cuantos numeros deseo meter como //
    scanf("%d", &n);

    printf("Ingrese los números naturales separados en espacios para evitar hacer mas codigo:\n");
//gracias al for puedo saber con un par de simples codigos cuantos lo de los espacios fue un despelote//
    for (int i = 0; i < n; i++) {
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            pares++;//con esto miro si es par porque si no lo fuera el == seria 1
        }
        if (es_primo(numero)) {
            primos++;
        }
    }

    float porcentaje_pares = (float)pares / n * 100;
    float porcentaje_primos = (float)primos / n * 100; //el float basicamente me da escribiendo en porcentajes los numeros pares y primos que deseo meter

    printf("Pares: %.2f%%, Primos: %.2f%%\n", porcentaje_pares, porcentaje_primos);// esto solo escribe el porcentaje de los numeros que metimos tanto pares vomo si sin primos etc//

    return 0;
}
