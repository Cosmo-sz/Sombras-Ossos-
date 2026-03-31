# include <iostream>
using namespace std;

int main() {
    // Criação das variaveis
    int vida, escolha;
    bool temTocha,temChave, temAmuleto, temEspada;
    
    //Inicialização das variaveis
    vida = 0;
    escolha = 0;
    temTocha = false;
    temChave = false;
    temAmuleto = false;
    temEspada = false;

    // Criação do personagem
    cout << "==============================" << endl;
    cout << "        Bem Vindo Jogador!" << endl;
    cout << "Voce esta em uma aventutura em busca" << endl;
    cout << "de um tesouro perdido, mas cuidado," << endl;
    cout << "o caminho esta cheio de perigos!" << endl;
    cout << "==============================" << endl;
    cout << "Para dar inicio a sua jornada" << endl;
    cout << "escolha seu personagem" << endl;
    cout << "[0] Guerreiro (Vida = 120 e espada)" << endl;
    cout << "[1] Aventureiro (vida = 100 e Tocha)" << endl;
    cin >> escolha;
    switch (escolha)
    {
        case 0:
            vida = 120;
            temEspada = true;
            break;
        case 1:
            vida = 100;
            temTocha = true;
            break;
        default:
            cout << "Escolha Invalida, tente novamente!" << endl;
            break;

    }
    return 0;
}