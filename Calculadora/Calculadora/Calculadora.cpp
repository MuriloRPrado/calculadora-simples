/*Calculadora Simples*/

#include <iostream>
#include <conio.h>

int main()
{
	//Variaveis
	char sistema = 'n', sistemaCal = 'c', operacao;
	int opcaoIni, opcaoCont;
	float num, num1, resultado;


	//Calculadora
	while (sistema == 'n') {

		//Opções do sistema
		system("cls");

		printf("\t \t Calculadora \n\n");
		printf("1- Iniciar \n");
		printf("0- Sair \n");
		scanf_s("%d", &opcaoIni);

		//Informações sobre as operações disponiveis
		switch (opcaoIni) {

		case 1:

			//Entrada de informações nas variáveis
			system("cls");
			printf("\t \t Calculadora \n\n");

			printf("Operacoes disponiveis na calculadora: \n");
			printf("'+' -- soma \n");
			printf("'-' -- Subtracao \n");
			printf("'*' -- Multplicacao \n");
			printf("'/' -- Divisao \n\n");

			printf("1- Continuar \n");
			printf("0- Sair \n");
			scanf_s("%d", &opcaoCont);

			switch (opcaoCont) {

			//Aqui se inicia a calculadora
			case 1:

				while (sistemaCal == 'c') {

					system("cls");
					printf("\t \t Calculadora \n\n");
					printf("Digite o primeiro numero \n");
					scanf_s("%f", &num);
					printf("Qual operacao desejada realizar? \n");
					scanf_s(" %c", &operacao, 2);
					printf("Digite o segundo numero \n");
					scanf_s("%f", &num1);

					//Calculo baseado na operação escolhida
					switch (operacao) {

					case '+':
						resultado = num + num1;

						printf("%.2f %c %.2f = %.2f \n", num, operacao, num1, resultado);
						break;

					case '-':
						resultado = num - num1;

						printf("%.2f %c %.2f = %.2f \n", num, operacao, num1, resultado);
						break;

					case '*':
						resultado = num * num1;

						printf("%.2f %c %.2f = %.2f \n", num, operacao, num1, resultado);

						break;

					case '/':
						resultado = num / num1;

						printf("%.2f %c %.2f = %.2f \n", num, operacao, num1, resultado);
						break;

					default:
						printf("Operacao invalido \n");
						break;
					}

					//Opção se deseja realizar mais algum calculo, se sim, ele volta pro começo do while
					printf("Deseja calcular novamente? \n");
					printf("c - Sim, continuar \n");
					printf("e - Nao, encerrar \n");
					sistemaCal = _getche();
					printf("\n");
				}

				break;

			case 0:
				printf("Saindo... \n"); //Se escolhida a opção 0
				break;

			default:
				printf("Opcao invalida \n"); //Se escolhida opção invalida
				break;
			}

			break;

		case 0:
			printf("Saindo... \n"); //Se escolhido a opção 0
			break;
		default:
			printf("Opcao invalida \n"); //Se escolhida opção invalida
			break;
		}

		printf("Deseja realmente sair? (s/n) \n");
		sistema = _getche();
		printf("\n");

	}
	
	system("pause");

}