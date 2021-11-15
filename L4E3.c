/*
UNIVERSIDADE CATÓLICA DE BRASÍLIA
CURSO: ANÁLISE E DESENVOLVIMENTO DE SISTEMAS
DISCIPLINA: PROGRAMAÇÃO ESTRUTURADA
DOCENTE: JOYCE SIQUEIRA
DISCENTE: RAFAEL RIKI OGAWA OSIRO (UC21100716)
Exercício: 3. Escreva as instruções necessárias para definir um tipo de ESTRUTURA que contenha 2 elementos, uma 
“STRING” de 10 caracteres e um INTEIRO:
*/

/*
1) Fazer a inclusão das bibliotecas básicas 
    exemplo: #include<stdio.h>, #include<stlib.h>, #include<string.h>

2) Fazer a estrutura struct com qualquer nome que comece com a primeira letra em maiúsculo.
    exemplo: struc Estrutura
3) Abrir as chaves podendo ser abertas na mesma linha, igual java, ou então na próxima linha, igual C ou C#.
    exemplo: 
    struct Estrutura {
    
    ou

    struct Estrutura
    {

4) Colocar dentro da struct quais tipos de variáveis deseja colocar. E em seguida de um nome seguindo o padrão
Camel Case, a primeira letra da variável minúscula e ao invés de usar o espaço colocar a primeira letra, ao
 invés do espaço, em letra maiúscula e o restante em minúsculo.
    exemplo:
    int variavelInt;
    double variavelDouble;
    float   variavelFloat;
    char variavelString[10];
    etc...

5) Assim que colocar as variáveis e os métodos, fechar com as chaves e em seguida colocar o ponto e vírgurla.
    exemplo: };

6) Abrir a função main, padronizada.
    exemplo:
    int main()
    {

    }

    ou
    int main() {

    }

7) Abrir uma variável struct + nome colocado + nome que o programador deseja no plural, seguindo as boas prá
ticas. Caso deseja um array de structs basta abrir e fechar os colchetes e colocar o número desejado de objetos
 dentro, assim como o array.
    exemplo: struct Estrutura estruturas;

    exemplo de array de struct: struct Estrutura estruturas[10];

8) Para acessar os atributos daquela struct utilizar o nome da struct que o programador escolheu e acessar por
 meio de "->" e após da seta colocar o nome do atributo. Já para o array colocar o nome da struct que o 
 programador escolheu + abrir e fechar os colchetes + colocar um número que deseja acessar dentro do colchete + 
 o "."  e após o ponto final o atributo desejado.
    exemplo: estrutura->variavelInt = 10;
    exemplo usando um array de struct: estruturas[Numero Do Array].variavelDouble = 20.0;
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Pessoa
{
    char primeiroNome[30];
    int idade;
};

int main()
{
    struct Pessoa pessoas[2];

    for (int i = 0; i < (sizeof(pessoas)/sizeof(pessoas[0])); i++)
    {
        printf("Digite o nome da pessoa %d: ", i+1);
        fflush(stdin);
        fgets(pessoas[i].primeiroNome, (sizeof(pessoas[i].primeiroNome)/sizeof(pessoas[i].primeiroNome[0])), stdin);
        system("cls");

        printf("Digite a idade da pessoa %d: ", i+1);
        fflush(stdin);
        scanf("%d", &pessoas[i].idade);
        system("cls");
    }

    for (int i = 0; i < (sizeof(pessoas)/sizeof(pessoas[0])); i++)
    {
        printf("PESSOA: %d\n", i+1);
        printf("Nome: %s\n", pessoas[i].primeiroNome);
        printf("Idade: %d\n\n\n", pessoas[i].idade);
    }
    
    return 0;
}