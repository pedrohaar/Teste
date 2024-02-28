#include <stdio.h>

// Definir o n�mero de candidatos e eleitores
#define NUM_CANDIDATOS 5
#define NUM_ELEITORES 20

int main() {
	// Array de n�meros dos candidatos
    int numeros[NUM_CANDIDATOS] = {1, 13, 17, 40, 51};
    
    // Array de nomes dos candidatos
    const char *nomes[NUM_CANDIDATOS] = {"Eneas", "Lula", "Bolsonaro", "Tiririca", "Sergio"}; // inicializa um array de ponteiros para caracteres com os nomes dos candidatos.
    
	// Array para armazenar os votos de cada candidato
	int votos[NUM_CANDIDATOS] = {0};
    
    // Exibir o menu dos candidatos com seus respectivos n�meros
    printf("Escolha um candidato: \n");
    for (int i = 0; i < NUM_CANDIDATOS; i++) {
            printf("%d - %s\n", numeros[i], nomes[i]);
    }

	// Solicitar votos de cada eleitor e contabilizar
    for (int i = 0; i < NUM_ELEITORES; i++){
        int voto;
        printf("Eleitor %d, insira o numero do seu candidato: ", i + 1);
        scanf("%d", &voto);
        int encontrado = 0;
        // Verificar se o n�mero do candidato � v�lido
        for (int j = 0; j < NUM_CANDIDATOS; j++){
        	if (numeros[j] == voto){
        		votos[j]++;
        		encontrado = 1;
        		break;
			}
		}
		// Se o candidato n�o for v�lido, exibir mensagem de erro
		if (!encontrado){
			printf("\nCandidato invalido!\n");
		}	
    }
    
    // Exibir o resultado da vota��o e determinar o vencedor
	printf("\nResultado da votacao:\n");
    int maxVotos = 0;
    const char *vencedor = NULL; //declara um ponteiro para um caractere constante e o inicializa como nulo.
    for (int i = 0; i < NUM_CANDIDATOS; i++) {
        printf("%s: %d votos\n", nomes[i], votos[i]);
        if (votos[i] > maxVotos) {
            maxVotos = votos[i];
            vencedor = nomes[i];
        }
    }
    printf("\nO vencedor da eleicao e: %s\n", vencedor);

    return 0;
    
    
    // Se o n�mero de eleitores for 2000, voc� precisaria modificar o define NUM_ELEITORES para 2000.
    // E assim ter� as 2000 intera��es.
    
    
}
