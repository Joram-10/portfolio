#include <iostream>

const int NUM_CANDIDATOS = 5;
const int NUM_ZONAS = 4;

int obtenerVotos(int matriz[][NUM_ZONAS]) {
    int total = 0;
    for (int i = 0; i < NUM_CANDIDATOS; i++) {
        for (int j = 0; j < NUM_ZONAS; j++) {
            printf("Ingrese los votos del candidato %d en la zona %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            total += matriz[i][j];
        }
    }
    return total;
}

int determinarGanador(const int matriz[][NUM_ZONAS], int totalVotos) {
    int maxVotos = 0;
    int candidatoGanador = -1;
    int segundoCandidato = -1;

    for (int i = 0; i < NUM_CANDIDATOS; i++) {
        int votosCandidato = 0;
        for (int j = 0; j < NUM_ZONAS; j++) {
            votosCandidato += matriz[i][j];
        }

        if (votosCandidato > maxVotos) {
            segundoCandidato = candidatoGanador;
            candidatoGanador = i;
            maxVotos = votosCandidato;
        } else if (votosCandidato > matriz[segundoCandidato][0]) {
            segundoCandidato = i;
        }
    }

    printf("Total de votos: %d\n", totalVotos);

    if (maxVotos > (totalVotos / 2)) {
        printf("El candidato ganador es el número %d\n", candidatoGanador + 1);
    } else {
        printf("Los dos candidatos que pasarían a segunda vuelta son:\n");
        printf("Candidato %d\n", candidatoGanador + 1);
        printf("Candidato %d\n", segundoCandidato + 1);
    }

    return 0;
}

int main() {
    int votos[NUM_CANDIDATOS][NUM_ZONAS];

    int totalVotos = obtenerVotos(votos);
    determinarGanador(votos, totalVotos);

    return 0;
}

