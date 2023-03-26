/*
1 - Faça o algoritmo para calcular o valor de uma prestação em atraso com base na multa de 2% e também do juros mensal de 1% sobre o valor principal. 
Declare vetores explícitos para entrada do valor da prestação, valorprincipal [ ] e da quantidade de dias em atraso: dias [ ].
Armazene os resultados no vetor ValorPagar [ 5 ].
Ao final imprima a tabela com os vetores valorPrincipal [], dias [] e valorpagar[] . 
Faça um menu de controle.
*/ 

#include <iostream> 
#include <math.h>
#include <iomanip> // Biblioteca para usar duas casas após a vírgula com fixed << setprecision(2)

using namespace std;

float const Juros = (100.00/30.00)*0.01; // Cálculo do Juros (constante)
float const Multa = 0.02;
float valorpagar[5], valorprincipal[] = {}, txjuros, txmulta; // Variáveis para receber, vetor com 5 valores a ser guardados e vetor vazio para armazenar.
int size = sizeof(valorpagar)/sizeof(int), opcao, dias[] = {}; // size para receber a quantidade contida em valorpagar e um vetor vazio de dias para armazenar e opcao para escolher.


void valortotal() // Função feita em void com for
{ 
for(int i = 0; i < size; i++) // for para armazenar o valor para pagar e os dias de vencimento utilizando o size para armazenar 5 valores
{
  cout << "\nDigite o valor a pagar: "; 
  cin >> valorpagar[i];
  cout << "Dias após vencimento: ";
  cin >> dias[i];
}
for(int i = 0; i < size; i++) // for para  calcular e exibir com 5 valores a ser mostrados
{
  txjuros = Juros * dias[i] * valorpagar[i]; // calculo onde a taxa de juros vai receber os dias, valorpagar e os juros constantes
  txmulta = Multa * valorpagar[i]; // calculo onde a multa vai ser a constante e o valorpagar
  valorprincipal[i] = txjuros + txmulta + valorpagar[i]; // valorprincipal vai receber a soma de todos os anteriores mais o valorpagar
  
  cout << "\nJuros: " << fixed << setprecision(2) << txjuros << "%" << "\nMulta: R$" << txmulta << fixed << setprecision(2) << "\nValor total: R$" << valorprincipal[i] << fixed << setprecision(2) << endl; // exibir
  }
}
int main(){

  do{ // o do é faça e o while é enquanto 
Menu: // É isso.
system("clear"); // limpar o sistema
cout << "\t\t\t-------- Menu --------\n";

  cout << "\n1 - Executar"; //
  cout << "\n2 - Sair";
  cout << "\n\nEscolha: "; // Selecione 1 para rodar e 2 para vazar
  cin >> opcao;
  
  switch(opcao){ // Estrutura de casos para a opcao escolhida
    case 1:
    valortotal(); // caso for 1 bota os valores ae e vai exibir o resultado
    case 2:
    exit(0); // caso for 2 você vazou 
    } 
  } while (opcao != 2); // se for diferente de 2 cabou do mesmo jeito "mas dá erro"
goto Menu; // Finalizado
}
