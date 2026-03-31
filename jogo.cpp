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

    // fase 1
    cout << "=============================================" << endl;
    cout << "FASE 1 - A CAVERNA" << endl;
    cout <<"==============================================" << endl;
    cout << "Ao se aproximar da caverna, voce percebe que" << endl;
    cout << "existem 2 caminhos, um completamente esuro e" << endl;
    cout << "outro iluminado por cristais incandescentes" << endl;
    cout << "Qual caminho voce escolhe?" << endl;
    cout << "[0] Caminho Escuro" << endl;
    cout << "[1] Caminho Iluminado" << endl;
    cin >> escolha;
    if (escolha == 0) {
        if (temTocha) {
            cout << "Voce ergue sua tocha para iluminar o caminho e, como se fosse obra do destino, encontra um amuleto!" << endl;
            temAmuleto = true;
        } else {
            cout << "Sem qualquer fonte de luz para guia-lo, voce acaba caindo em um buraco!" << endl;
            cout << "Com o impacto da queda, perde 20 pontos de vida." << endl;
            vida -= 20;
        }
    } else if (escolha == 1) {
        cout << "Voce segue pelo caminho iluminado pelos cristais incandescentes e, durante a jornada, encontra uma chave!" << endl;
        temChave = true;
    } else {
        cout << "Escolha Invalida, tente novamente!" << endl;
    }


    return 0;
}