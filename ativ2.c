#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nome[30];
    int idade;
    float salario;
} FUNCIONARIO;

FUNCIONARIO coleta_dados() {
    FUNCIONARIO func;
    printf("\nDigite o nome do funcionario: ");
    getchar();
    fgets(func.nome, 30, stdin);
    func.nome[strcspn(func.nome, "\n")] = 0;

    printf("ID do funcionario: ");
    scanf("%d", &func.id);

    printf("Digite a idade do funcionario: ");
    scanf("%d", &func.idade);

    printf("Digite o salario do funcionario: ");
    scanf("%f", &func.salario);

    return func;
}

void imprime_dados(FUNCIONARIO vetor[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("\n\n------ Dados do Funcionario %d -------\n", i + 1);
        printf("Nome do Funcionario: %s\n", vetor[i].nome);
        printf("ID do Funcionario: %d\n", vetor[i].id);
        printf("Idade do Funcionario: %d\n", vetor[i].idade);
        printf("Salario do Funcionario: %.2f\n", vetor[i].salario);
    }
}

void reajusta_salario(float *salario) {
    *salario *= 1.10;
}

void rel_salario_corrigido(FUNCIONARIO vetor[], int quantidade) {
    printf("\n\n------ Salários Corrigidos -------\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Nome: %s | Novo Salario: %.2f\n", vetor[i].nome, vetor[i].salario);
    }
}

int main() {
    int quantidade = 5;
    FUNCIONARIO func[quantidade];

    for (int i = 0; i < quantidade; i++) {
        func[i] = coleta_dados();
    }

    imprime_dados(func, quantidade);

    for (int i = 0; i < quantidade; i++) {
        reajusta_salario(&func[i].salario);
    }

    rel_salario_corrigido(func, quantidade);

    return 0;
}
