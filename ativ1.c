#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario {
    int id;
    char nome[30];
    int idade;
    float salario;
};

int main() {
    struct funcionario func[5];
    int i;
    for(i = 0; i < 5; i++) {
        printf("\ndigite o nome do funcionario: ");
        getchar(); 
        fgets(func[i].nome, 30, stdin);
        func[i].nome[strcspn(func[i].nome, "\n")] = 0; 
        
        printf("ID do funcionario: ");
        scanf("%d", &func[i].id);
        printf("digite a idade do funcionario: ");
        scanf("%d", &func[i].idade);
        printf("digite o salario do funcionario: ");
        scanf("%f", &func[i].salario);
    }

    for(i = 0; i < 5; i++) {
        printf("\n\n------dados do Funcionario-------\n");
        printf("Nome do Funcionario: %s\n", func[i].nome);
        printf("ID do Funcionario: %d\n", func[i].id);
        printf("Idade do Funcionario: %d\n", func[i].idade);
        printf("Salario do Funcionario: %.2f\n", func[i].salario);
    }

    return 0;
}
