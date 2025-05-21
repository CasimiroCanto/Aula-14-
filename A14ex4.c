#include <stdio.h>
#include <string.h>
int palindromo(const char *str) {
    const char *inicio = str;
    const char *fim = str + strlen(str) - 1;

    while (inicio < fim) {
        if (*inicio != *fim) {
            return 0; 
        }
        inicio++;
        fim--;
    }
    return 1; 
}

void inverter_string(char *str) {
    char *inicio = str;
    char *fim = str + strlen(str) - 1;

    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char str1[] = "arara";
    char str2[] = "programacao";

    printf("Testando palindromo:\n");
    printf("'%s' é palíndromo? %s\n", str1, palindromo(str1) ? "Sim" : "Não");
    printf("'%s' é palíndromo? %s\n", str2, palindromo(str2) ? "Sim" : "Não");

    printf("\nInvertendo strings:\n");
    inverter_string(str2);
    printf("String invertida: %s\n", str2);

    return 0;
}