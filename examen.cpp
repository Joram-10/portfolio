#include <iostream>

const int NUM_CANDIDATOS = 5;
const int NUM_ZONAS = 4;

void obtenerVotos(int matriz[][NUM_ZONAS]) {
    for (int i = 0; i < NUM_CANDIDATOS; i++) {
        for (int j = 0; j < NUM_ZONAS; j++) {
            std::cout << "Ingrese los votos del candidato " << i + 1 << " en la zona " << j + 1 << ": ";
            std::cin >> matriz[i][j];
        }
    }
}

int calcularTotalVotos(const int matriz[][NUM_ZONAS]) {
    int total = 0;
    for (int i = 0; i < NUM_CANDIDATOS; i++) {
        for (int j = 0; j < NUM_ZONAS; j++) {
            total += matriz[i][j];
        }
    }
    return total;
}

void determinarGanador(const int matriz[][NUM_ZONAS], int totalVotos) {
    double porcentajeGanador = 0;
    int candidatoGanador = -1;
    int segundoCandidato = -1;

    for (int i = 0; i < NUM_CANDIDATOS; i++) {
        int votosCandidato = 0;
        for (int j = 0; j < NUM_ZONAS; j++) {
            votosCandidato += matriz[i][j];
        }
        double porcentaje = static_cast<double>(votosCandidato) / totalVotos * 100;

        if (porcentaje > porcentajeGanador) {
            segundoCandidato = candidatoGanador;
            candidatoGanador = i;
            porcentajeGanador = porcentaje;
        } else if (porcentaje > (static_cast<double>(matriz[segundoCandidato][0]) / totalVotos * 100)) {
            segundoCandidato = i;
        }
    }

    std::cout << "Total de votos: " << totalVotos << std::endl;

    if (porcentajeGanador > 50) {
        std::cout << "El candidato ganador es el número " << candidatoGanador + 1 << std::endl;
    } else {
        std::cout << "Los dos candidatos que pasarían a segunda vuelta son: " << std::endl;
        std::cout << "Candidato " << candidatoGanador + 1 << std::endl;
        std::cout << "Candidato " << segundoCandidato + 1 << std::endl;
    }
}

int main() {
    int votos[NUM_CANDIDATOS][NUM_ZONAS];

    obtenerVotos(votos);
    int totalVotos = calcularTotalVotos(votos);
    determinarGanador(votos, totalVotos);

    return 0;
}

