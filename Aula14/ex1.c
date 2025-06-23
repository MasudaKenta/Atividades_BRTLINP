#include <stdio.h>
#include <math.h>

#define g 9.81

float calcular_tempo_queda(float altura){
    float t = sqrt((altura*2)/g);
    return t;
}

float calcular_distancia_liberacao(float velocidade, float altura){
    float tempo = calcular_tempo_queda(altura);
    float d = velocidade * tempo;
    return d;
}

int main(void){

    float altura, velocidade;
    
    printf("Insira a altura do aviao: ");
    scanf("%f", &altura);

    printf("Insira a velocidade do aviao: ");
    scanf("%f", &velocidade);

    float tempo = calcular_tempo_queda(altura);
    float distancia = calcular_distancia_liberacao(velocidade, altura); 

    printf("distancia do alvo: %.0f m\ntempo de queda: %.1f s\n", distancia, tempo);

    return 0;
}
