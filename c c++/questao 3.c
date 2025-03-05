//Julio Cleiton Seabra Mendes
//Emanuel Ami da Silva Hernandez
//Erick Roberto Pinheiro Silva
//Victor Andrews Viana Rodrigues
//João Guilherme Gomes Monteiro



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char *Metade(char *s) {
    int len = strlen(s);
    int metade_len = (int)ceil(len / 2.0);
    char *nova_string = (char *)malloc((metade_len + 1) * sizeof(char));
    strncpy(nova_string, s, metade_len);
    nova_string[metade_len] = '\0';
    return nova_string;
}

int main() {
    int buffer_size = 100;
    char s[buffer_size];

    printf("Digite uma string: ");
    fgets(s, buffer_size, stdin);

    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }

    char *metade = Metade(s);
    printf("Metade da string: %s\n", metade);

    free(metade);

    return 0;
}
