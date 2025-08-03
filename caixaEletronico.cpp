//caixa eletronico
#include <iostream>

int main() {
	using namespace std;
	cout << "CAIXA ELETRONICO\n\n\n";
	bool exit = false;
	int resposta;
	double saldo = 1000, transicao;
	for (;;) {
		cout << "seu saldo eh de: " << saldo << "R$\n\n";
		cout << "Voce quer: \n\n"; 
		cout << "1. Sacar\n";
		cout << "2. Depositar\n";
		cout << "3. Sair\n";
		cout << "\nSua resposta: ";
		cin >> resposta;
			switch (resposta)
			{
			case 1: {
				if (saldo <= 0)
				{
					cout << "\nVoce ta lizo. Nao pode mais fazer operacoes de saque. Deposite mais dinheiro.\n\n";
					break;
				}
				cout << "Quanto voce quer sacar? "; cin >> transicao;

				if (transicao <= 0)
				{
					cout << "\nVoce nao pode sacar um valor negativo. Reiniciando...\n\n";
					break;
				}

				saldo -= transicao;
				cout << "\nVoce sacou " << transicao << "R$. Seu saldo agora eh de: " << saldo << "R$\n\n";


			}
				  break;
			case 2: {
				cout << "\nQuanto voce quer depositar? "; cin >> transicao;

					if (transicao <= 0)
					{
						cout << "voce nao pode depositar menos de 0R$. Fechando programa...\n";
						break;
					}

					cout << "\nVoce depositou " << transicao << "R$. Agora voce tem " << saldo + transicao << "R$.\n";
					saldo += transicao;
			}
				  break;
			case 3: exit = true;
				break;
			default: cout << "\n\nValores invalidos. Fechando....\n";
				break;
			}

			if (exit == true)
			{
				break;
			}
	}
	return 0;
}
