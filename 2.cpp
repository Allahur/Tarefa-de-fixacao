/* 
2 - Crie um algoritmo que tenha um vetor explícito para armazenar 5 
idades e um vetor não explícito para armazenar 5 nomes. Ao final Exiba o 
nome da pessoa de maior idade, menor idade, a média das idades é o saldo 
das idades. 
*/

#include <iostream>
#include <math.h>

using namespace std;

int idade[5] = {19, 20, 18, 17, 16}; // vetor com 5 valores já armazenados
string nome[5]; // vetor para armazenar 5 valores
int media, option, id = sizeof(idade)/sizeof(int); // variáveis para receber e escolher e o id é para armazenar a idade

void saldoidade(){ // função void para iniciar
for(int i = 0; i < id; i++){ // for para iniciar o armazenamento de valores e o id mencionei anteriormente
  
  cout << "\nDigite o nome: "; 
  cin >> nome[i];
      
  media = idade[i] / 5; // cálculo da média 
  
  cout << "\nNome: " << nome[i] <<  "\nIdade: " << idade[i] << "\nMedia:" << media; // mostrar os valores armazenados
  cout << "\n"; // para não ficar feio
  }
}
int main(){

Menu:
system("clear"); // Limpar a linha de comando
  do{
    cout << "------- Menu -------";
    cout << "\n1 - Inicializar";
    cout << "\t2 -  Sair";
    cout << "\nSelecione: "; // escolha 1 para rodar e 2 para vazar
    cin >> option;

    switch(option){ // opcao escolhida
    case 1:
    saldoidade(); // caso for 1 faça tudo que pede
    case 2:
    exit(0); // caso for 2 você vazou seu safado
    break;
      }
      } while (true); // enquanto for verdadeiro o valor escolhido e o do é faça então é pra fazer
goto Menu; // Ah sei lá
}
