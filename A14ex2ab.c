#include <stdio.h>
#include <math.h>

float calcular_tempo_queda(float altura) {
    const float g = 9.81f;
    return sqrtf((2 * altura) / g);
}

float calcular_distancia_liberacao(float velocidade, float altura) {
    float tempo = calcular_tempo_queda(altura);
    return velocidade * tempo;
}

int main() {
    float altura, velocidade;
    
    printf("Sistema de Liberação de Cargas Aéreas\n");
    printf("------------------------------------\n");
    
    printf("Digite a altura do avião (metros): ");
    scanf("%f", &altura);
    
    printf("Digite a velocidade do avião (m/s): ");
    scanf("%f", &velocidade);
    
    float tempo_queda = calcular_tempo_queda(altura);
    float distancia = calcular_distancia_liberacao(velocidade, altura);
    
    printf("\nResultados:\n");
    printf("Tempo de queda: %.2f segundos\n", tempo_queda);
    printf("Distância para liberação: %.2f metros antes do alvo\n", distancia);
    
    return 0;
}