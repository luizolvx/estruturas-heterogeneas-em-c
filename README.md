# Sistema de Gestão de Funcionários em C

Dois programas em linguagem C para gestão de dados de funcionários, demonstrando diferentes abordagens de estruturação de código e manipulação de dados.

## Estrutura do Projeto

### Arquivos
- `ativ1.c` - Versão inicial com abordagem estruturada simples
- `ativ2.c` - Versão aprimorada com funções modularizadas e operações avançadas

## Funcionalidades Implementadas

### ativ1.c - Versão Básica
- **Entrada de dados** de 5 funcionários via array estático
- **Estrutura de dados** com campos: ID, nome, idade, salário
- **Exibição** dos dados coletados
- Abordagem procedural simples com todas operações na main()

### ativ2.c - Versão Avançada
- **Função `coleta_dados()`** - Modulariza a entrada de dados
- **Função `imprime_dados()`** - Exibe informações de forma organizada
- **Função `reajusta_salario()`** - Aplica reajuste de 10% nos salários
- **Função `rel_salario_corrigido()`** - Gera relatório com salários atualizados
- **Uso de typedef** para simplificação da estrutura
- **Passagem por referência** para manipulação de salários

## Estrutura de Dados
typedef struct {
    int id;
    char nome[30];
    int idade;
    float salario;
} FUNCIONARIO;

## Características Técnicas Demonstradas
### ativ1.c Demonstra:
- Declaração e uso de structs
- Arrays estáticos de estruturas
- Entrada de dados com fgets e scanf
- Formatação de saída
- Controle básico de fluxo

### ativ2.c Demonstra:
- Modularização de código
- Passagem de estruturas por valor e referência
- Funções especializadas para cada operação
- Manipulação de ponteiros para modificação in-place
- Melhores práticas de organização de código
- Tratamento de strings com fgets

...

------ Dados do Funcionario 1 -------
Nome do Funcionario: João Silva
ID do Funcionario: 101
Idade do Funcionario: 32
Salario do Funcionario: 4500.00

------ Salários Corrigidos -------
Nome: João Silva | Novo Salario: 4950.00
